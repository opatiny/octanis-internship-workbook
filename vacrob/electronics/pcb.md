# The PCBs of the robot

[Home](../../README.md) | [Project main page](../vacrob.md) | [Links / References](../docs/refs.md) | [Electronics general doc](./electronics.md)

## Computer board (big format)

The computer board is the main board of the project. A Raspberry PI slides onto it and acts as the main micro-controller. The Lidar, the screen and the battery will be directly connected to it.

## DC motor board (big format)

Project cloned with: `git clone ssh://git@make.octanis.ch:2222/oi/oibus-dc-motor-controller.git`

GitLab project: [https://make.octanis.ch/oi/oibus-dc-motor-controller/tree/master](https://make.octanis.ch/oi/oibus-dc-motor-controller/tree/master)

The motor board has to be enhanced to become functional. The goal is to solve all the issues of the project. The board allows to control **4 DC motors**. It uses **H-bridges** to chose the rotation direction.

In the whole robot, they are 5 motors of 4 different types. The wheels motors are **brushed DC motors** with a **hall effect encoders**. The brushes motor are brushed DC as well, but do not have encoders. All these motors speed varies using a **PWM signal** from the micro-controller. Hypothetically, varying the input voltage could also achieve that. However, DACs should be used, which do not allow high currents. It is therefore not a good approach.

We assume that the maximal voltage the motors should be powered by is **12V** (we checked it, they don't burn at 12V).

**H-bridge component:** [**VNH7040AYTR**, Motion Motor Control](https://www.arrow.com/en/products/vnh7040aytr/stmicroelectronics?utm_campaign=octopart_2018&utm_currency=USD&utm_keyword=VNH7040AYTR&utm_medium=aggregator&utm_content=inv_listing&utm_source=octopart)

**Wheels Hall effect sensor:** [**TCS40DPR**](../docs/datasheets/hallSensor/TCS40DPR_hall_sensor.pdf)

One of the problems to solve is that the board does not manage **encoders** of the DC motors. We made reverse engineering to understand which pins of the wheels connector corresponded to the encoder.

### VNH7040AYTR (H-bridge)

The component allows to have a lot of current that can flow in both directions, depending on the input. The problem with this component is that it sometimes disappears from the market -> it might be good to replace it someday.

### TCS40DPR (Hall sensor, encoder of the wheels)

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

### MPN of a few components

- Blue led orthogonal : IN-S63AS5B
- Red led orthogonal : IN-S63AS5R
- 2.2k resistor : RC0603JR-072K2L
- 10K resistor : RC0603JR-0710KL
- molex microblade connector 4 pins : 53261-0471

## Distance and bump sensing board (small format)

Each board should include two distance sensors, one vertical (to prevent fall) and one horizontal, and one bump sensor. The sensor we want to use is an SMD, therefore, a daughter board has to be designed to have one sensor perpendicular to the other. Another possibility, would be to make a **rigid-flex PCB**.

Distance sensor: [**VL53L0X, Time-of-Flight (ToF) ranging sensor**](https://www.st.com/en/mems-and-sensors/proximity-sensors.html#products)

Snap switch (endstop): [https://www.digikey.com/product-detail/en/zf-electronics/DB3CB1LB/CH880-ND/1083873](https://www.digikey.com/product-detail/en/zf-electronics/DB3CB1LB/CH880-ND/1083873)

Board to board connector: [https://www.digikey.com/en/product-highlight/a/amphenol-fci/minitek-connectors](https://www.digikey.com/en/product-highlight/a/amphenol-fci/minitek-connectors)

AVX board-to-board (BTB) connector spec for male layout:
<img src="../docs/datasheets/avx-connector/avx-btb-conn-6pos-male-layout.jpg" alt="avx btb conn 6pos male layout"  rotate="180" width="80%" class="center">

### VL53L0X (distance sensor)

- **ToF** (time-of-flight) module
- **940 nm** VCSEL emitter
- **I2C**, 1 address (but programmable?!): **0X52**
- Field Of View (FOV): **25 degrees C**
- Max distance measurement: 
  - normal mode: about 1.2 m
  - long-range mode: about 2.2 m
- Class 1 laser safety limits
- temperature shouldn't get over 260 deg C
- Single Photon Avalanche Diodes (**SPADs**): The term Single-Photon Avalanche Diode (SPAD) defines a class of photodetectors able to detect low intensity signals (down to the single photon) and to signal the time of the photon arrival with high temporal resolution (few tens of picoseconds).

### MPN of a few components

- AVX 6 pos BTB connector: 009159006551906
- Limit switch: DB3CB1LB

## Coral board (small format)

To design!

Coral is an IA that detects objects and recognizes them. A board integrating it will be needed. THe coral hardware is a USB stick
