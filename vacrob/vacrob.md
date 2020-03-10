# Vacuum cleaner robot (VacRob)

[Home](../README.md) | [Links / References](./docs/references/refs.md)

## Goal

Make a vacuum cleaning robot applying the technologies developed at Octanis Instruments. The robot will use some of the same components as the Xiaomi Mi Roborock (already existing vacuum cleaner robot). Yet, all the user interface, the electronics and the sensors will be new.

## Table of contents

- [Mechanics](./mechanics/mechanics.md)
  - [Assembly 1](./mechanics/assembly1.md)
  - [Assembly 2](./mechanics/assembly2.md)
  - [Assembly 3](./mechanics/assembly3.md)
  - [Assembly 4](./mechanics/assembly4.md)
- [Electronics](./electronics/electronics.md)
  - [Assembly of the electronics](./electronics/assembly/assembly.md)
- [Distance modules](./distanceModule/distanceModules.md)
  - [Firmware - Lab Notebook](./distanceModule/firmware/distance-module-fw-LN.md)
  - [Fixing crosstalk problem](./distanceModule/crosstalk/crosstalk.md)
  - [Sensor accuracy test](./distanceModule/sensorTest/sensorTest.md)
- [Motor module](./motorModule/motorModule.md)

  - [Application specific firmware](./motorModule/firmware/motorModuleFW.md)

- [Raspberry Pi compute module](./raspi/raspi.md)
  - [Lidar](./raspi/lidar/lidar.md)
  - [Touch screen](./raspi/touchScreen/touchScreen.md)
  - [Speaker](./raspi/speaker/speaker.md)
- [Software / general behavior of the robot](./software/software.md)
- [Useful links related to the project](./docs/refs.md)

## Things to consider (perspectives)

- we could place a robotic arm on the robot if it supported the weight ([AR2](https://www.youtube.com/watch?v=CCgI4R1TEzI))
- adaptive gripper? [https://www.thingiverse.com/thing:2527079](https://www.thingiverse.com/thing:2527079) and [https://www.youtube.com/watch?v=x9KWuQXTURI](https://www.youtube.com/watch?v=x9KWuQXTURI)
- add LEDs and/or a microphone for user interface
