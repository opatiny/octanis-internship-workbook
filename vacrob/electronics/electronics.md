# Electronics

[Home](../../../README.md) | [Project main page](../../vacrob.md) | [Links / References](../../docs/refs.md) | [PCB doc](./pcb.md)

It is important to design the outer case in a way that puts forwards the electronics inside, indeed, the goal of the robot is to show the ecosystem developed by the company, which mainly consists of the easy to assemble PCBs and the software / firmware.

The robot required some functionalities that had already been developed, like the computer board. However, some boards had either to be modified (DC motor module) or completely designed (distance sensing module).

## DC motor module 

This is the board which allows the control of the wheels and brushes motors. It was an existing modules, based on which we created a new revision more adapted to the project.

[DC motor module documentation](../motorModule/motorModule.md)

## Distance sensing module

The distance sensing module has been created specifically for this application. It has two distance sensor and a snap switch.

[Distance sensing module documentation](../distanceModules/distanceModules.md)

## Power supply

To know what kind of battery is needed, the power consumption must first be estimated. We know that the voltage of the battery is the one that will directly go to the motors. Therefore, it should not be over 12V (the motors might be destroyed otherwise). Similarly, the lowest the voltage, the smaller the maximal speed of the robot will be.

We used a variable power supply to estimate the current necessary for the motors at 12V: each motor uses approx. 0.1A. Let's consider the "worst" case for energy consumption with the five motors (considering the pump) working simultaneously. Then, we have an instant power consumption of: $P = 5 \cdot 12 \cdot 0.1 = 6W$.

Looking on [Conrad](https://www.conrad.ch), one possible battery is a [pack of 2 in parallel x 3 in series 18x650 cells](https://www.conrad.ch/fr/p/pack-de-piles-rechargeables-6x-18650-li-ion-ansmann-2447-3050-01-11-1-v-5200-mah-1547351.html). This battery pack hax a tension of 11.1V and a capacity of 5200 mAh. The robot will requires 0.5 A. Therefore, it would have an autonomy of 10 hours. This is definitely sufficient, if the battery is recharged often enough.

Waiting for the battery pack, a regular battery holder for three 18x650 Lion cells in series was used to power the robot (estimate autonomy is 5 hours).

**Warning:** The power consumption of the Raspberry Pi is not considered! From the [official raspberry doc](https://www.raspberrypi.org/documentation/faqs/#:~:targetText=The%20Raspberry%20Pi%201%20Model,has%20no%20standard%20overclocking%20settings.):

" The device is powered by 5V micro USB. Exactly how much current (mA) the Raspberry Pi requires is dependent on which model you are using, and what you hook up to it. We recommend a 2.5A (2500mA) power supply, from a reputable retailer, that will provide you with enough power to run your Raspberry Pi for most applications, including use of the 4 USB ports. "

This might considerably reduce the autonomy that we have estimated before!

