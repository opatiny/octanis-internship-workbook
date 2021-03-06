# Micro fluidics application

[Home](../../README.md)

**Goal :** Find an application in micro-fluidics for the valve control developed by Octanis Instruments. We should consider that it is possible to get a precise pressure at some point in a pneumatic circuit. Design the load.

**Idea :** Device allowing to get 5 precise concentrations of a solution from a concentrated solution and a solvent. The final solutions should allow to realise calibration curves.

## Theory

[https://www.elveflow.com/microfluidic-tutorials/microfluidic-reviews-and-tutorials/flow-control-in-microfluidic-device/](https://www.elveflow.com/microfluidic-tutorials/microfluidic-reviews-and-tutorials/flow-control-in-microfluidic-device/)

### Ways to obtain a flow

To obtain a flow in a fluid, a difference of pressure is required. In microfluidics, three different ways of obtaining a pressure difference are used:

- use ambient pressure by having liquid at to different heights -> for water, 1cm corresponds to 1mBar -> you are limited to approx 100mBar of pressure (1m difference), because otherwise your devices would get huge!
- use a pressure generator: basically the fluid equivalent of a power supply
- use a syringe pump: pressing on the syringe allows you to have a precise flow

### Valves

How could we make a valve?

<img src="./valve.jpg" alt="PDMS sheet valve" width="70%" class="center">

This requires a very thin and regular PDMS resin membrane. How could we easily make one?

- try using two parts of PMMA / glass that are squeezed together when some resin is placed between them

Another possibility to make a valve would be using a small magnet that would be attracted or repelled using an electromagnet.

## Constrains

- channels thickness: 1 mm wide and 0.5 mm high

## PDMS resin and ABS approach

- Using PDMS resin allows to integrate things inside of the microfluidics chip (sensors, stirrers, heating, microcontrollers,...).
  - the resin is really stable, it is transparent and similar to rubber in consistency
  - plasma can be used to make permanent bond between PDMS and glass
- ABS can be 3D printed to get nearly any shape and then be dissolved using acetone

## Links

General micro-fluidics : [https://metafluidics.org/?s=mixer](https://metafluidics.org/?s=mixer)

Symbols explanation : [https://www.youtube.com/watch?v=ajLRtRs92lY](https://www.youtube.com/watch?v=ajLRtRs92lY)

Usage examples :

[https://www.youtube.com/watch?v=LkAq667Zg9c](https://www.youtube.com/watch?v=LkAq667Zg9c)

Mixers:

[https://www.youtube.com/watch?v=8mW7TJPPcDs](https://www.youtube.com/watch?v=8mW7TJPPcDs)

[https://www.youtube.com/watch?v=AMQkW9yXjR8](https://www.youtube.com/watch?v=AMQkW9yXjR8)

**PDMS resin** and ABS filament (and acetone)!!!
[https://www.youtube.com/watch?v=7z8I7awRYY4](https://www.youtube.com/watch?v=7z8I7awRYY4)

Shrink dink (temperature shrinking plastic sheet):
[https://www.youtube.com/watch?v=eNBg_1GPuH0](https://www.youtube.com/watch?v=eNBg_1GPuH0)

Valve - micro-fluidics chip interface : [https://uk.rs-online.com/web/p/pneumatic-straight-fittings/1216176/](https://uk.rs-online.com/web/p/pneumatic-straight-fittings/1216176/)

- microfluidics valve
  - [http://2016.igem.org/Team:Uppsala/Project/Microfluidics](http://2016.igem.org/Team:Uppsala/Project/Microfluidics)
- how to easily bond PDMS and Plexiglass
  - microwave? -> [https://www.youtube.com/watch?v=fMUemBZ0k5Q](https://www.youtube.com/watch?v=fMUemBZ0k5Q)
  - [http://2018.igem.org/Team:Madrid-OLM/HardawareMicrofluidics#workflowPDMS](http://2018.igem.org/Team:Madrid-OLM/HardawareMicrofluidics#workflowPDMS)
