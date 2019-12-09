# VacRob motor control

[Home](../../../README.md) | [Project main page](../../vacrob.md) | [Links / References](../../docs/references/refs.md)

The VacRob has five different motors which have to be controlled:
- 2 main wheels (DC motor with encoder)
- 1 main brush (DC motor)
- 1 side brush (DC motor)
- 1 pump

Four of these motors are DC motors. Yet, Octanis Instruments already has a module which allows the control of four DC motors. Therefore, we have based ourselves on that project and have created a new revision of the hardware, which allows to read two encoders (it is rev2). This is the link to the project: [https://make.octanis.ch/oi/oibus-dc-motor-controller](https://make.octanis.ch/oi/oibus-dc-motor-controller).  The new hardware version is in the `rev2` folder, whereas the application specific firmware is in `stm32-freertos-fw-vacrob`. Underneath, you find links to the documentation specific to the hardware and to the firmware:



- [Board design / hardware](electronics/motorModulesElec.md)
- [Firmware](firmware/motorModuleFW.md)

