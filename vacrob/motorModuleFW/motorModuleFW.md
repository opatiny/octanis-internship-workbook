# DC motor board FW: specific for the application

In general, we are trying to write FW for the different UAVCAN modules that is independent from the application. However, in the case of the VacRob, we will write some application specific firmware. Indeed, all the decisions based on the distance boards measurements are made in there.

To start, we have cloned the `oibus-dc-motor-controller` project. In there, we have cloned the  `stm32-freertos-firmware-oibus104` firmware folder to create a base for our firmware. This specific firmware is called `stm32-freertos-fw-vacrob`.

You can find it here: [https://make.octanis.ch/oi/oibus-dc-motor-controller/tree/master/stm32-freertos-fw-vacrob](https://make.octanis.ch/oi/oibus-dc-motor-controller/tree/master/stm32-freertos-fw-vacrob).

**Goal:** Use the data on the UAVCAN bus to make the robot move in the middle of a corridor. It should also avoid every obstacle and stop in case of fall hazard.

## First ideas of the code structure (2019.11.22)

### Reading the data from the bus

- We must be able to read all the distance measurements and store them (-> in an array?)
- What should be the refresh rate? Is it fixed by the amount of packages on the bus?

### Brushes behavior

- The brushes should start turning whenever the wheels speed is non-zero. 
- An arbitrary speed can be set as constant, after some tests are run.
- Be careful because the turning direction is important.


## UAVCAN: handling packages

The function where we actually do modifications to indicate what to do with the decrypted messages is `static void keyValueHandleCanard(CanardRxTransfer *transfer)`, which is defined in `oi_uavcan.c`. In there, we process the incoming CAN packages that interest us and we store the data in a data structure.



