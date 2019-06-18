# Theoretical knowledge in electronics and general observations

## Concepts

### Impedence

- "generalized resistance"
- is different from the resistance when there is a frequency in the signal -> AC


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
- a transistor is basically a __current amplifier__
- __npm__ and __pnp__: one has the opposite polarities of the other
- __npm__ : open when no current, closed when current

<img src="./transistor.gif" alt="case assembly" width="60%" class="center">


#### BJT : Bipolar junction transistor

- accuracy, low noise
- when some rules respected, $I_C$ roughly proportional to $I_B$ : $I_C = \beta \cdot I_B$ where $I_B$ is typically 100. $I_C$ and $I_B$ flow to the emitter.
- beware: $\beta$ can vary a lot (temperature and others)
- so a transistor is not an on-of switch! You have all the middle values as well
- 

#### FET : Field-effect transistor

- low power, high impedence, high current switching


### Zener diode
Diode that sinks current when voltage is over a certain threshold -> tries to keep it under the threshold. So, it has a voltage drop that can vary in one direction, whereas it remains the same in the other direction (standard between 0.5 and 0.7V).

-> would allow to make an easy voltage divider

To check : [https://electronics.stackexchange.com/questions/292140/why-is-a-resistor-needed-in-zener-protection-circuit](https://electronics.stackexchange.com/questions/292140/why-is-a-resistor-needed-in-zener-protection-circuit)


## Vocabulary

### The art of electronics
- IC : integrated circuit

### Datasheets
- __clamp :__
- __current drift :__
- __drain :__
- __hysteresis :__
- __leakage current :__
- __low-side and high-side :__ whether it is on the high potential or the low potential side
- __NC:__ Not Connected
- __open-load :__