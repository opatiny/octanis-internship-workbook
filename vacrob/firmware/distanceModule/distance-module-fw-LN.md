# Distance modules firmware writing- Lab Notebook

## Bumper

An interrupt has been coded to get the bumper state. The interrupt is defined in the `freertos.c` file in the function `HAL_GPIO_EXT1_Callback()`.
Debouncing has been implemented using the `HAL_GetTick()` function to get the time.

## Distance sensors

The distance sensors on the distance module have only one I2C address: **0x52** ([datasheet](../datasheets/vl53l0x_distance_sensor.pdf)) p.18). The two distance sensors are therefore connected to two distinct I2C buses. Mother board sensor is on I2C1 and daughter board sensor is on I2C2.

The message type to use for the distance sensor output: [https://github.com/UAVCAN/public_regulated_data_types/blob/master/uavcan/equipment/range_sensor/1050.Measurement.uavcan](https://github.com/UAVCAN/public_regulated_data_types/blob/master/uavcan/equipment/range_sensor/1050.Measurement.uavcan)

<img src="./firmware-state-machine-dist-sensor.png" alt="firmware state machine distance sensor" width="50%" class="center">

The sensor measurements are based on Single Photon Avalanche Diodes (**SPADs**).

## Distance sensor (VL53L) API UM notes

### Initializing the distance sensors (initial calibration)

Functions to run at the beginning to get the device working (from the [API UM](./vl53l0x-api-description.pdf)). **To do once for each use setting!**

```C
// device initialization
VL53L0X_DataInit(); 
// loading settings
VL53L0X_StaticInit();
// SPADs calibration, to do in case of cover glass -> returns number and type of spads to be used (2 values to store!)
VL53L0X_PerformRefSpadManagement();
//adjustment of the device sensitivity when temperature varies (to make every time temperature varies from more than 8 degrees C)
VL53L0X_PerformRefCalibration();
// can be necessary in case of cover glass
// run the function with device at 100mm from white reflective surface, in the dark
// returns the offset value in micrometers
VL53L0X_PerformOffsetCalibration();;

// in case of cover glass, cross-talk calibration might also be needed -> quite complicated
// VL53L0X_PerformXTalkCalibration()
```

### Initialization and calibration

**To execute once after every reset!**

```C
// device initialization (to cal once and only once after reboot)
VL53L0X_DataInit(); 
// loading settings
VL53L0X_StaticInit();
// get type and number of SPADs stored on host
VL53L0X_GetReferenceSpads();
// set the type and number of spads to the right values
VL53L0X_SetReferenceSpads();
// load calibration parameters
VL53L0X_SetRefCalibration();
// load offset from host memory
VL53L0X_SetOffsetCalibrationDataMicroMeter();

// enable cross-talk calibration and load data
VL53L0X_SetXTalkCompensationEnable();
VL53L0X_SetXTalkCompensationRateMegaCps();

// select one of the three ranging modes (continuous, single, continuous timed)
VL53L0X_SetDeviceMode();

// configures the system interrupt mode
VL53L0X_SetGPIOConfig();
```

### Ranging

Setting up the type of measurements and how to retrieve the data.

```C
// for timed continuous ranging
VL53L0X_SetInterMeasurementPeriodMilliSeconds();
// set ranging time -> the longer, the more accurate the measurement, standard is 33 miliseconds
VL53L0X_SetMeasurementTimingBudgetMicroSeconds();
// start measurement with chosen mode
VL53L0X_StartMeasurement();
// get a status on the ongoing measurement
VL53L0X_GetMeasurementDataReady();

// get measurement, first value is range in mm
VL53L0X_GetRangingMeasurementData();
// get error status -> should be 0 if data is valid
VL53L0X_GetRangeStatusString();
```

Apparently, the firmware can be used to change the device I2C address!
```C
VL53L0X_SetDeviceAddress();
```

## Trying to communicate through I2C with the distance sensor

Test code is written inside of the `freertos.c` file, it the default task.

Problem: The existing API for the VL53L has to be adapted to the STM32 at the level of the I2C communication (-> write adapted driver).

We use HAL functions to communicate in I2C with the sensor. The first test that needs to be run is to check if the sensor is responding on the I2C bus. To do that, we used the `HAL_I2C_IsDeviceReady(&hi2c1, (uint16_t)(address<<1)`, 2, 2); function.

The best way to see if the sensor is actually responding is to use the oscilloscope and to connect it on the I2C bus (-> the middle header on the board). Then, the I2C bus cn be decoded. In our case, we got `W:34 W:34`. This is the hexadecimal value for 52, which shows that the sensor is responding to the message sent by the microcontroller.

<img src="./distance-module-oscilloscope.jpg" alt="oscilloscope setup" width="50%" class="center">
Setup for the I2C bus decoding.

<img src="./firmware-state-machine-dist-sensor.png" alt="firmware state machine distance sensor" width="50%" class="center">
Result of the decoder
