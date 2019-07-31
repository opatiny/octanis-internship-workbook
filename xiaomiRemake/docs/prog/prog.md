# Software

## UAVCAN


## Distance modules

### Bumper

An interrupt has been coded to get the bumper state.

### Distance sensors

The distance sensors on the distance module have only one I2C address: **0x52** ([datasheet](../datasheets/vl53l0x_distance_sensor.pdf)) p.18). The two distance sensors are therefore on distinct I2C buses.

The message type to use for the distance sensor output: [https://github.com/UAVCAN/public_regulated_data_types/blob/master/uavcan/equipment/range_sensor/1050.Measurement.uavcan](https://github.com/UAVCAN/public_regulated_data_types/blob/master/uavcan/equipment/range_sensor/1050.Measurement.uavcan)
