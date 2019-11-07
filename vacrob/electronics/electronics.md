# Electronics

[Home](../../README.md) | [Project main page](../vacrob.md) | [Links / References](../docs/refs.md) | [PCB doc](./pcb.md)

It is important to design the outer case in a way that put forward the electronics inside, indeed, the goal of the robot is to show the ecosystem developed by the company, which mainly consists of the easy to assemble PCBs and the software / firmware.

The robot required some functionalities that had already been developed, like the computer board. However, some boards had either to be modified (DC motor module) or completely designed (distance sensing module).

For more precise information about the different boards, click [here](./docs/pcb/pcb.md) (lab notebook format).

## Power supply

To know what kind of battery is needed, the power consumption must first be estimated. We know that the voltage of the battery is the one that will directly go to the motors. Therefore, it should not be over 12V. Similarly, the lowest the voltage, the smaller the maximal speed of the robot will be.

We used a variable power supply to estimate the current necessary for the motors at 12V: each motor uses approx. 0.1A. Let's consider the "worst" case for energy consumption with the five motors (considering  the pump) working simultaneously. Then, we have a instant power consumption of: $P = 5 \cdot 12 \cdot 0.1 = 6W$.

Looking on [Conrad](https://www.conrad.ch), one possible battery is a [pack of 2 in parallel x 3 in series 18x650 cells](https://www.conrad.ch/fr/p/pack-de-piles-rechargeables-6x-18650-li-ion-ansmann-2447-3050-01-11-1-v-5200-mah-1547351.html). This battery pack hax a tension of 11.1V and a capacity of 5200 mAh. The robot will requires 0.5 A. Therefore, it would have an autonomy of 10 hours. This is definitely sufficient, if the battery is recharged often enough.

