# VacRob distance modules electronics / hardware

[Home](../../../README.md) | [Project main page](../../vacrob.md) | [Distance module main page](../distanceModules.md) | [Links / References](../../docs/references/refs.md)

Each board includes two distance sensors, one vertical to prevent fall and one horizontal to prevent collision. The sensor we use is an SMD, therefore, a daughter board has been designed to have one sensor perpendicular to the other. Another possibility, would have been to make a **rigid-flex PCB**.

## Where to find the layout of the board?

This board had its own GitLab repository, which contains the layout for rev1 and rev2, as well as the firmware of the board.

**Project repository:** [https://make.octanis.ch/oi/oibus-mini-distance-module](https://make.octanis.ch/oi/oibus-mini-distance-module)

## Information about the components used

### Main specific components

**Distance sensor:** [**VL53L0X, Time-of-Flight (ToF) ranging sensor**](https://www.st.com/en/mems-and-sensors/proximity-sensors.html#products)

**Snap switch (endstop/bumper):** [https://www.digikey.com/product-detail/en/zf-electronics/DB3CB1LB/CH880-ND/1083873](https://www.digikey.com/product-detail/en/zf-electronics/DB3CB1LB/CH880-ND/1083873)

**Board to board connector:** [https://www.digikey.com/en/product-highlight/a/amphenol-fci/minitek-connectors](https://www.digikey.com/en/product-highlight/a/amphenol-fci/minitek-connectors)

AVX board-to-board (BTB) connector spec for male layout:
<img src="../docs/datasheets/avx-connector/avx-btb-conn-6pos-male-layout.jpg" alt="avx btb conn 6pos male layout"  rotate="180" width="80%" class="center">

### VL53L0X (distance sensor) specs

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