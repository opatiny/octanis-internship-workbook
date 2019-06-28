# Vacuum cleaner robot

[Home](../README.md) | [Links / references](./docs/refs.md) | [Project PCBs doc](./docs/pcd/pcb.md)

## Goal
Make a vacuum cleaning robot applying the technologies developped at Octanis Instruments. The robot will use some of the same components as the Xiaomi Mi Roborock (already existing vacuum cleaner robot). Yet, all the user interface, the electronics and the sensors will be new.

## Mechanics

First of all, the focus has been put on the mechanical aspect of the project: in other words, the case. This had to be made using the techniques at disposition, namely __laser cutting__ and __3D printing__ (CNC milling could also be considered). Laser cutting has the advantage to be fast, however, the shapes that can be realized are limited. On the contrary, 3D printing is slow, but allows a large variety of shapes (especially with resin printing -> to try out!).

To realize the models (either 2D or 3D), __Fusion 360__ has been used, which is an open-source CAD software.

__General concept of the case:__ The case is has an __octogonal base__ with a width of about 400 mm and a height of about 100 mm. The sides, top and bottom are laser-cut out of transparent acrylic glass. The case holds together thanks to screws and dented sides that slot one into the other. The inner components are all maintained in place by specific 3D printed parts.

<img src="./docs/pictures/fusionScreenshots/assembly.jpg" alt="case assembly" width="50%" class="center">

_Outer case assembled in Fusion 360_


### Not making holes for distance sensors

The distance sensor that we want to use (VL53L0X) emits at 940 nm. Referring to the image underneath, clear plexiglass has a high transmittance at this frequency. Therefore, it could be possible to use the distance sensor through the plexiglass (no holes required).

<img src="../datasheets/plexiglass_transmittance_IR.jpg" alt="clear acrylic glass transmittance for IR frequencies" width="50%" class="center">

[plexiglas optical and transmission characteristics](https://www.plexiglas.com/export/sites/plexiglas/.content/medias/downloads/sheet-docs/plexiglas-optical-and-transmission-characteristics.pdf)

### The hinges
Hinges are needed to make a door that allows easy access to the dust collector and to the battery. Initially, regular commercial brass hinges were to be used. However, they were finally 3D printed using flexible filament. This allows to vary the shape, size and color of the hinges (not sure that it is cheaper, though).

A first try was made in PLA, but it did not work, for the part broke instead of bending. Afterwards, FlexiSMART filament was used, which worked perfectly (-> see [video](../xiaomiRemake/docs/pictures/flexHinge.mp4)).

## Electronics





