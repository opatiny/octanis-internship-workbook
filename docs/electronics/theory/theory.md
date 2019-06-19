# Theoretical knowledge in electronics and general observations

## Concepts

### Hall effect
Voltage perpendicular to a current that can be measured when a magnetic field is near it.

### Impedence ($Z$)

"Electrical impedance is the measure of the __opposition that a circuit presents to a current when a voltage is applied___. The term complex impedance may be used interchangeably." - Wiki
- "generalized resistance"
- is different from the resistance when there is a frequency in the signal -> AC
- $Z = R + jX$, where $R$ is the __resistance__, $j$ is the complex unit number and $X$ is the __reactance__

## Electrical circuits and components

### EDS diode
Protective component against electro-static discharges (-> tenths of thousands of volts). Roughly, it can make a huge voltage drop.


### Diode clamping circuit
"A clamping circuit (also known as a clamper) will bind the upper or lower extreme of a waveform to a fixed DC voltage level" - Wiki

You have to use zener diodes to clamp. Clamp basically means "take down to" (clamp = serrer).

### Filters

### H-bridge

An H-bridge  (half bridge) is an electrical circuit which allows to chose in which direction current is flowing. It can be used to control the spin direction of a motor. It basically consists of four transistors.

<img src="./h-bridge.webp" alt="case assembly" width="50%" class="center">

### Transistors

- Active component,  three-terminal (3 legs)
- can amplify (output signal with more power than input signal)
- can be compared to two diodes (diodes are made in the same material, but are only np or pn)
- a transistor is basically two things : a __current amplifier__ or an __electronic switch__
- __npm__ and __pnp__: one has the opposite polarities of the other
- __npm__ : open when no current, closed when current

<img src="./transistor.gif" alt="case assembly" width="60%" class="center">

- the names npn and pnp refer to the layers inside the component
- transistors have replaced __vacuum tubes__ aka __valves__ because they heat less and can be a lot smaller


#### BJT : Bipolar junction transistor

- basically three layers of semi-conductors (like silica) with added components inside the crystal. When voltage is applied on one side, a bridge of charges forms which allows the current to flow through.
- accuracy, low noise
- when some rules respected, $I_C$ roughly proportional to $I_B$ : $I_C = \beta \cdot I_B$ where $I_B$ is typically 100. $I_C$ and $I_B$ flow to the emitter.
- beware: $\beta$ can vary a lot (temperature and others)
- so a transistor is not an on-off switch! You have all the middle values as well
- 

#### FET : Field-effect transistor

- low power, high impedence, high current switching
- __MOSFET:__ Metal Oxide Semiconductor Field-Effect Transistor


### Zener diode
Diode that sinks current when voltage is over a certain threshold -> tries to keep it under the threshold. So, it has a voltage drop that can vary in one direction, whereas it remains the same in the other direction (standard between 0.5 and 0.7V).

-> would allow to make an easy voltage divider

To check : [https://electronics.stackexchange.com/questions/292140/why-is-a-resistor-needed-in-zener-protection-circuit](https://electronics.stackexchange.com/questions/292140/why-is-a-resistor-needed-in-zener-protection-circuit)


## Vocabulary

- __IC :__ integrated circuit
- __clamp :__
- __current drift :__
- __drain :__
- __hysteresis :__ lag in a physical response to an input (response occurs only after the effect)
- __leakage current :__ in general, current that goes through something when it is open (no connection). In the case of a capacitor, current that goes through because the isolator is not perfect
- __low-side and high-side :__ whether it is on the high potential or the low potential side
- __NC:__ Not Connected
- __open-load :__

## Tools tips

### Variable power supply

- beware that the output is on! (little orange light next to "output")

### Oscilloscope

- use trigger on edge (abrupt voltage change)
- trigger has 3 modes: normal (keeps last event), single (keeps first event) and auto (refreshes every new event)

### Multimeter (BM235)

- on resistance analysis mode, click on Select to switch from one mode to the other
- mode 1: beeps when direct electric connection (null resistance)
- mode 2: indicates resistance