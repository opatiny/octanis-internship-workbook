# Vacuum cleaner robot

[Home](../README.md) | [Links / references](./docs/refs.md) | [Project PCBs doc](./docs/pcd/pcb.md)

## Goal

Make a vacuum cleaning robot applying the technologies developped at Octanis Instruments. The robot will use some of the same components as the Xiaomi Mi Roborock (already existing vacuum cleaner robot). Yet, all the user interface, the electronics and the sensors will be new.

## Mechanics

First of all, the focus has been put on the mechanical aspect of the project: in other words, the case. This had to be made using the techniques at disposition, namely **laser cutting** and **3D printing** (CNC milling could also be considered). Laser cutting has the advantage to be fast, however, the shapes that can be realized are limited. On the contrary, 3D printing is slow, but allows a large variety of shapes (especially with resin printing -> to try out!).

To realize the models (either 2D or 3D), **Fusion 360** has been used, which is an open-source CAD software.

**General concept of the case:** The case is has an **octogonal base** with a width of about 400 mm and a height of about 100 mm. The sides, top and bottom are laser-cut out of transparent acrylic glass. The case holds together thanks to screws and dented sides that slot one into the other. The inner components are all maintained in place by specific 3D printed parts.

<img src="./docs/pictures/fusionScreenshots/assembly.jpg" alt="case assembly" width="50%" class="center">

_Outer case assembled in Fusion 360_

### List of parts necessary to build the case

- 1 5mm acrylic glass top part
- 1 5mm acrylic glass flap part
- 1 5mm acrylic glass bottom part
- 8 5mm acrylic glass side parts
- 8 3D printed corner parts
- 2 3D printed flexible hinges
- 1 3D printed clip (to keep the flap in place)
- 1 3D printed flexible bottom clip (to keep the flap in place)
- 74 M3x15 black nylon screws
- 58 M3 black nylon bolts

### Not making holes for distance sensors

The distance sensor that we want to use (VL53L0X) emits at 940 nm. Referring to the image underneath, clear plexiglass has a high transmittance at this frequency. Therefore, it could be possible to use the distance sensor through the plexiglass (no holes required).

<img src="../datasheets/plexiglass_transmittance_IR.jpg" alt="clear acrylic glass transmittance for IR frequencies" width="50%" class="center">

[plexiglas optical and transmission characteristics](https://www.plexiglas.com/export/sites/plexiglas/.content/medias/downloads/sheet-docs/plexiglas-optical-and-transmission-characteristics.pdf)

### The hinges

Hinges are needed to make a door that allows easy access to the dust collector and to the battery. Initially, regular commercial brass hinges were to be used. However, they were finally 3D printed using flexible filament. This allows to vary the shape, size and color of the hinges (not sure that it is cheaper, though).

A first try was made in PLA, but it did not work, for the part broke instead of bending. Afterwards, FlexiSMART filament was used, which worked perfectly (-> see [video](../xiaomiRemake/docs/pictures/flexHinge.mp4)).

### Laser cutting the PMMA parts

The laser cutter used is the [FabKit MI5](https://www.fabcreator.com/Fabkit) with the [LightBurn](https://lightburnsoftware.com/pages/trial-version-try-before-you-buy) software.

The laser cutter maximal dimensions are

The parts are cut in 5mm thick clear PMMA. The cut parameters used were:

- speed: 6mm/s
- max power: 100%
- min power: not defined

#### Parts dimensions

- **face:** 165.685 x 110 mm
- **top:** 427.526 x 427.526 mm
- **bottom:** 427.526 x 427.526 mm

## Electronics
