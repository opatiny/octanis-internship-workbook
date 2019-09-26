# Octanis Instruments bioreactor

[Home](../../README.md) | [Revision 1 documentation](./bioreactor-rev1.md)

The bioreactor must allow to maintain four 1/2 liter jars at a precise temperature, stir (CO2 bubbles), and control the luminosity of each jar with a plexiglass light-diffusing stick.

The bioreactor is based on the previous project in collaboration with Univalle:
[https://github.com/Bioreactor](https://github.com/Bioreactor)

The case itself, made in FreeCAD:
[https://github.com/Bioreactor/Bioreactor_v4/tree/master/CAD/v4.3](https://github.com/Bioreactor/Bioreactor_v4/tree/master/CAD/v4.3)

One file in particular has been used as a base for our laser-cut models: Bioreacteur_v4_6mm.dxf](./Bioreacteur_v4_6mm.dxf).

## CO2 can to 4 mm rubber tube interface (gas-bottle-adapter)

[Final model of rev1 : gas-bottle-adapter-v10.stl](./exports/gas-bottle-adapter/stl/gas-bottle-adapter-v10.dxf)

**Problem:** Make an interface between a Soda Fresh CO2 bottle and the bioreactor -> it has a non-standard thread. The output should be a connector for a 4mm soft tube. Take into consideration that they are 230 bars of pressure in a full can.

**Solution:** Design a 3D part in Fusion360 that will be 3D printed in PLA. This is quite tricky because the part has overhangs.

The can has a non-standard thread, which had to be modeled in Fusion360 from scratch. To get it right, we proceeded with trial and error, until the part could be screwed well.

## Lid

[Final model of rev1: lid-v13.dxf](./exports/lid/mdf-6mm/dxf/lid-v13.dxf)

The lid of the bioreactor contain a cooling unit recuperated from a drinks cooler (Pelletier). It has to fit around the main part of the bioreactor. The material used to build it is 6mm MDF that is then spray-painted black for aesthetics and humidity resistance. The MDF is glued using wood glue. [The model](./exports/lid/mdf-6mm/dxf/lid-v13.dxf) was designed in Fusion and then laser-cut.
There was a design problem with the air cycle in the lid. Therefore, a 3D printed part was designed to redirect the air inside of the main part. The part has been designed so that the user can select either the hot or the cold air goes to the main. The system is made out of three different parts.

[Final model of rev1: heater-air-channel-v6.stl](./exports/lid/heater-air-channel/stl/heater-air-channel-v6.stl)
[Final model of rev1: lid-air-out-v3.stl](./exports/lid/heater-air-channel/stl/lid-air-out-v3.stl)
[Final model of rev1: lid-air-through-v2.stl](./exports/lid/heater-air-channel/stl/lid-air-through-v2.stl)

## Main

[Final model of rev1: main-v4.dxf](./exports/main/dxf/main-v4.dxf)

The main part is designed around the heat plate, which acts as a base. It must be able to contain four 1/2 liter flasks, or one 1 liter flask. The main part has to fit around the base with an overlap, so that the electronics contained in it are protected in case of liquids spilled.

It is made out of 5mm clear plexiglass. The plexiglass parts are glued together using a special acrylic glue and the heat bed is fixed with clear silicone.

## Base

[Final model of rev1: base-v18.dxf](./exports/base/5mm/dxf/base-v18.dxf)

The base contains all of the electronics. More precisely, it has to fit a stack of OI big PSBs (no case) and have two emplacements for small PCBs (with case). There must also be an emplacement for a fan that would blow air perpendicularly to the big PCBs. Also, four peristaltic pumps must fit on the sides. On the front of the base, a Raspberry Pi screen must fit (user interface). Finally, the top of the base has to contain three load cells and a stepper motor (magnetic agitation).

The base is also made out of 5mm thick clear PMMA and is glued with acrylic glue.

[Model of the small PCB case: small-pcb-case-v2.stl](./exports/base/small-pcb-case/STL/small-pcb-case-v2.stl)

## Revision 1

Refer to [this page](./bioreactor-rev1.md) for documentation about revision 1 of this project.
