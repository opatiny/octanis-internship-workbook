# Octanis made bioreactor

The bioreactor must allow to maintain four 1/2 liter jars at a precise temperature, stir (CO2 bubbles), and control the luminosity of each jar with a plexiglass light-diffusing stick.

The bioreactor is based on the previous project in collaboration with Univalle:
[https://github.com/Bioreactor](https://github.com/Bioreactor)

The case itself, made in FreeCAD:
[https://github.com/Bioreactor/Bioreactor_v4/tree/master/CAD/v4.3](https://github.com/Bioreactor/Bioreactor_v4/tree/master/CAD/v4.3)

## CO2 can to 4 mm rubber tube interface

**Problem:** Make an interface between a Soda Fresh CO2 bottle and the bioreactor -> it has a non-standard thread. The output should be a connector for a 4mm soft tube. Take into consideration that they are 230 bars of pressure in a full can.

**Solution:** Design a 3D part in Fusion360 that will be 3D printed in PLA. This is quite tricky because the part has overhangs.

The can has a non-standard thread, which had to be modeled in Fusion360 from scratch. To get it right, we proceeded with trial and error, until the part could be screwed well.

## Lid

[Final model](./dxf/lid-v13.dxf)

The lid of the bioreactor contain a cooling unit recuperated from a drinks cooler. It has to fit around the main part of the bioreactor. The material used to build it is 6mm MDF that is then spray-painted black for aesthetics and humidity resistance. The MDF is glued using wood glue. [The model](./dxf/lid-v13.dxf) was designed in Fusion and then laser-cut.

## Main

[Final model](./dxf/main-v4.dxf)

The main part is designed around the heat plate, which acts as a base. It must be able to contain four 1/2 liter flasks, or one 1 liter flask. It is made out of 6mm clear plexiglass. The plexiglass parts are glued together using a resin glue and the heat bed is fixed with silicone.
