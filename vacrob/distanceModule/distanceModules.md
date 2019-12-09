# VacRob distance modules: sensing the environment

[Home](../../../README.md) | [Project main page](../../vacrob.md) | [Distance module main page](../distanceModules.md) | [Links / References](../../docs/references/refs.md)

The vacuum cleaner robot has to be able to sense its environment in order to react to it. In our case, we use 8 distance sensing boards placed on the faces of the robot. The robot includes a lidar as well, however, its data has not been used in the first place. Indeed, it was fairly difficult to process, for the lidar is connected to the Raspberry Pi, and not to directly to a micro-controller (refer to [this page](../raspi/lidar/lidar.md) for more information about the lidar).

In the scope of this project, we first had to design this board entirely. Then, we had to order the boards, assemble them by hand and debug them. Finally, the firmware had to be written. All these different steps have been documented in various files:

- [Board design / hardware](electronics/distanceModulesElec.md)
- [Firmware](firmware/distance-module-fw-LN.md)
- [Fixing crosstalk problem](crosstalk/crosstalk.md)
- [Testing the distance sensor in diverse environments](sensorTest/sensorTest.md)
