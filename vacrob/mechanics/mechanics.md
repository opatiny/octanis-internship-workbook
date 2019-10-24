# Mechanics

[Home](../../README.md) | [Project main page](../vacrob.md) | [Links / References](../docs/refs.md)

First of all, the focus has been put on the mechanical aspect of the project: in other words, the case. This had to be made using the techniques at disposition, namely **laser cutting** and **3D printing** (CNC milling could also be considered). Laser cutting has the advantage to be fast, however, the shapes that can be realized are limited. On the contrary, 3D printing is slow, but allows a large variety of shapes (especially with resin printing -> to try out!).

To realize the models (either 2D or 3D), **Fusion 360** has been used, which is an open-source CAD software.

**General concept of the case:** The case is has an **octogonal base** with a width of about 400 mm and a height of about 100 mm. The sides, top and bottom are laser-cut out of transparent acrylic glass. The case holds together thanks to screws and "corners" that allow to connect the faces in a smooth way. The inner components are all maintained in place by specific 3D printed parts.

<img src="./docs/pictures/mechanics/fusionScreenshots/assembly-v18.jpg" alt="case assembly" width="80%" class="center">

_Outer case assembled in Fusion 360 (v18)_

## Different assemblies

Specific documentation has been written for each assembly of the robot mechanics:

- [Assembly 1](./assembly1.md)
- [Assembly 2](./assembly2.md)
- [Assembly 3](./assembly3.md)

## Not making holes for distance sensors

The distance sensor that we want to use (VL53L0X) emits at 940 nm. Referring to the image underneath, clear plexiglass has a high transmittance at this frequency. Therefore, it could be possible to use the distance sensor through the plexiglass (no holes required).

<img src="./docs/datasheets/plexiglass_transmittance_IR.jpg" alt="clear acrylic glass transmittance for IR frequencies" width="50%" class="center">

[Plexiglas optical and transmission characteristics](https://www.plexiglas.com/export/sites/plexiglas/.content/medias/downloads/sheet-docs/plexiglas-optical-and-transmission-characteristics.pdf)

## The hinges

Hinges are needed to make a door that allows easy access to the dust collector and to the battery. Initially, regular commercial brass hinges were to be used. However, they were finally 3D printed using flexible filament. This allows to vary the shape, size and color of the hinges (not sure that it is cheaper, though).

A first try was made in PLA, but it did not work, for the part broke instead of bending. Afterwards, FlexiSMART filament was used, which worked perfectly (-> see [video](../xiaomiRemake/docs/pictures/flexHinge.mp4)).

## Laser cutter

The laser cutter used is the [FabKit MI5](https://www.fabcreator.com/Fabkit) with the [LightBurn](https://lightburnsoftware.com/pages/trial-version-try-before-you-buy) software.

The laser cutter maximal cut dimensions are 680x470yx125mm.

### Parts dimensions

- **face:** 165.685 x 110 mm
- **top:** 427.526 x 427.526 mm
- **bottom:** 427.526 x 427.526 mm
