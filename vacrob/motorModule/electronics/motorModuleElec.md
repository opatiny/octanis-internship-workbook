# DC motor module (big format)

[Home](../../../README.md) | [Project main page](../../vacrob.md) | [DC motor module main page](../MotorModule.md) | [Links / References](../../docs/references/refs.md)


GitLab project: [https://make.octanis.ch/oi/oibus-dc-motor-controller/tree/master](https://make.octanis.ch/oi/oibus-dc-motor-controller/tree/master)

Project cloned with: `git clone ssh://git@make.octanis.ch:2222/oi/oibus-dc-motor-controller.git`

The motor board has to be enhanced to become functional. The goal is to solve all the issues of the project. The board allows to control **4 DC motors**. It uses **H-bridges** to chose the rotation direction.

In the whole robot, they are 5 motors of 3 different types. The wheels motors are **brushed DC motors** with a **hall effect encoder**. The brushes motor are brushed DC as well, but do not have encoders. Finally, the pump motor is of an unknown type. All these motors speed varies using a **PWM signal** from the micro-controller. Hypothetically, varying the input voltage could also achieve that. However, DACs should be used, which do not allow high currents. It is therefore not a good approach.

We assume that the maximal voltage the motors should be powered by is **12V** (we checked it, they don't burn at 12V).

**H-bridge component:** [**VNH7040AYTR**, Motion Motor Control](https://www.arrow.com/en/products/vnh7040aytr/stmicroelectronics?utm_campaign=octopart_2018&utm_currency=USD&utm_keyword=VNH7040AYTR&utm_medium=aggregator&utm_content=inv_listing&utm_source=octopart)

**Wheels Hall effect sensor:** [**TCS40DPR**](../docs/datasheets/hallSensor/TCS40DPR_hall_sensor.pdf)

One of the problems to solve is that the board does not manage **encoders** of the DC motors. We made reverse engineering to understand which pins of the wheels connector corresponded to the encoder.

## VNH7040AYTR (H-bridge)

The component allows to have a lot of current that can flow in both directions, depending on the input. The problem with this component is that it sometimes disappears from the market -> it might be good to replace it someday.

## TCS40DPR (Hall sensor, encoder of the wheels)

Datasheet: [**TCS40DPR**](../docs/datasheets/hallSensor/TCS40DPR_hall_sensor.pdf)

- Digital Output Magnetic Sensor
- 3 terminal device: GND, V<sub>CC</sub> (2.3 to 5.5V), <sub>OUT</sub> (0 to V<sub>CC</sub> V)
- [https://sensing.honeywell.com/hallbook.pdf](https://sensing.honeywell.com/hallbook.pdf) p. 25: "The output of a digital Hall effect sensor is NPN (current sinking, open collector)."
- p. 26 : "The current sink configuration produces a logic “0” condition when a magnetic field of sufficient magnitude is applied to the sensor."
- use a pull-up resistor!

<img src="../docs/datasheets/hallSensor/hall_sensor_pull-up.jpg" alt="pull-up resistor Hall sensor" width="50%" class="center">

After running tests using the oscilloscope, we observed that a 2.2k$\Omega$ pull-up resistor works fine. The chip works when alimented in 3.5V. The signal drops to GND when a magnetic field over a certain value is measured. The fastest the motor spins, the highest the frequency is (see figure underneath).

<img src="../docs/pictures/electronics/encoder-output/enc2.png" alt="wheels encoder output" width="80%" class="center">

Wheels reverse engineered electric scheme:

<img src="../docs/pictures/electronics/wheel_elec_scheme.jpg" alt="wheel encoder electrical scheme"  rotate="180" width="80%" class="center">

## MPN of a few components

- Blue led orthogonal : IN-S63AS5B
- Red led orthogonal : IN-S63AS5R
- 2.2k resistor : RC0603JR-072K2L
- 10K resistor : RC0603JR-0710KL
- molex microblade connector 4 pins : 53261-0471