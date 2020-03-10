# DC motor board FW: specific for the application

[Home](../../../README.md) | [Project main page](../../vacrob.md) | [DC motor module main page](../MotorModule.md)

Firmware repository: [https://make.octanis.ch/oi/oibus-dc-motor-controller/tree/master/stm32-freertos-fw-vacrob](https://make.octanis.ch/oi/oibus-dc-motor-controller/tree/master/stm32-freertos-fw-vacrob)

In general, we are trying to write FW for the different UAVCAN modules that is independent from the application. However, in the case of the VacRob, we will write some application specific firmware. Indeed, all the decisions based on the distance boards measurements are made in there.

To start, we have cloned the `oibus-dc-motor-controller` project. In there, we have cloned the `stm32-freertos-firmware-oibus104` firmware folder to create a base for our firmware. This specific firmware is called `stm32-freertos-fw-vacrob`.

You can find it here: [https://make.octanis.ch/oi/oibus-dc-motor-controller/tree/master/stm32-freertos-fw-vacrob](https://make.octanis.ch/oi/oibus-dc-motor-controller/tree/master/stm32-freertos-fw-vacrob).

**Goal:** Use the data on the UAVCAN bus to make the robot move in the middle of a corridor. It should also avoid every obstacle and stop in case of fall hazard.

## First ideas of the robot's behavior (2019.11.22)

### Reading the data from the bus

- We must be able to read all the distance measurements and store them (-> in an array?)
- What should be the refresh rate? Is it fixed by the amount of packages on the bus?

### Brushes behavior

- The brushes should start turning whenever the wheels speed is non-zero.
- An arbitrary speed can be set as constant, after some tests are run.
- Be careful because the turning direction is important.

### Motors behavior

- By default, the robot moves forwards on a straight line
- If it detects a wall too close, it turns
- If it detects a fall hazard in front, it goes backwards and then turns
- If it detects af all hazard behind, it goes forwards
- If it detects a wall too close and a fall hazard, it stops

## Code structure

The main firmware that we have written is the `vacrob` module, which contains:

- `vacrob_hazards.h`: handling bump, collision and fall hazards
- `vacrob_logs.h`: functions used in `oi_uavcan.c` which allow to take the CAN messages and extract the data to the project data structures
- `vacrob_macros.h`: all the macros of the fw, including parameters that can modify the robot's behavior
- `vacrob_main.h`: main function, which is calling all the other ones. It is used in `freertos.c` -> vacrob thread is in `defaultTask`
- `vacrob_motors.h`: motors control functions like stop all, roll forwards, etc
- `vacrob_process.h`: processing the distance and bump data placed in the data structures in `oi_uavcan.c`
- `vacrob_struct.h`: data structures definition

## Data structures

They are two main data structures that are used in the project.

### `distanceModules`

Data structure with all the logs of the distance boards. The 10 (or so) last distance measurements are kept to be able to treat the data, e.g. calculate average distance (smooth/filter). We had troubles with this array, because it had to be accessible from many files at different levels (we had to use it in `oi_uavcan.c`). Therefore, we had to define it as `extern`, which means that it is global and doesn't even need to be passed as a parameter to functions.

```c
typedef int Log_t[LOGS_LENGTH];

/*
  * @brief  Distance module instance structure
  * @note   FW implementation of a node
  * @param  {int} id: distance module CAN ID
  * @param  {Log_t} d1: logs of horizontal distance sensor
  * @param  {Log_t} d2: logs of vertical distance sensor
  * @param  {int} d1_ok: (state) VACROB_SENSOR_OK = H sensor hardware ok, VACROB_SENSOR_FAULTY = H sensor doesn't work
  * @param  {int} d2_ok: (state) VACROB_SENSOR_OK = V sensor hardware ok, VACROB_SENSOR_FAULTY = V sensor doesn't work
  * @param  {int} d1_status: 0 = H sensor data valid, 1 = H sensor out of range, 2 = H sensor data unstable
  * @param  {int} d1_status: 0 = V sensor data valid, 1 = V sensor out of range, 2 = V sensor data unstable
  * @param  {int} bumper: VACROB_NO_BUMP = bumper not pressed (0), VACROB_BUMP_DETECTED = bumper pressed (100)
  */
struct node {
    int id;
    Log_t d1;
    Log_t d2;
    int d1_ok;
    int d2_ok;
    int d1_status;
    int d2_status;
    int d1_average;
    int d2_average;
    int bumper;
};

typedef struct node Node_t;

// creating a new type that is an array of 8 nodes
typedef Node_t NodeArray_t[DIST_MODULES_NUMBER];

// declared as extern to keep the variable value between function calls (an array is a pointer on the first element)
// extern: making global -> exists, but no value assigned
// WARNING: this is a global variable, which means that it can be modified inside
// of all the functions without being passed as an argument!
extern NodeArray_t distanceModules;

```

### `motors`

Stucture with the state (rotation speed in percent) of all the motors and hazard states.

```c
/*
  * @brief  Data related with motors actions
  * @note
  * @param  {int} mainBrushSpeed: between 0 and 100
  * @param  {int} sideBrushSpeed: between 0 and 100
  * @param  {int} rightWheelSpeed: between 0 and 100
  * @param  {int} leftWheelSpeed: between 0 and 100
  * @param  {int} turnDirection: can take value VACROB_TURN_LEFT, VACROB_TURN_RIGHT or VACROB_NO_TURN
  * @param  {int} bumpMotion: can take value VACROB_WHEEL_FORWARDS or VACROB_WHEEL_BACKWARDS
  * @param  {HazardArray_t} fallHazard: array indicating which nodes throw a collision hazard (0 = no hazard, 1 = hazard)
  * @param  {HazardArray_t} collisionHazard: array indicating which nodes throw a fall hazard (0 = no hazard, 1 = hazard)
  * @param  {int} hazardType: 0 = no hazard, 1 = fall hazard, 2 = collision hazard, 3 = fall and collision hazard
  */
struct motors {
  // motors speeds
  int mainBrushSpeed;
  int sideBrushSpeed;
  int rightWheelSpeed;
  int leftWheelSpeed;

  int turnDirection; // in case of fall or collision hazard
  int bumpMotion; // in case of bump detection

  HazardArray_t fallHazard;
  HazardArray_t collisionHazard;
  int hazardType;
};

typedef struct motors Motors_t;
```

## UAVCAN: handling packages

The function where we actually do modifications to indicate what to do with the decrypted messages is `static void keyValueHandleCanard(CanardRxTransfer *transfer)`, which is defined in `oi_uavcan.c`. In there, we verify from which node the message is coming, and what it's key is (in our case, "bmp", "d_1" or "d_2"). Then, we place the message value in the right node of the distanceModules.
