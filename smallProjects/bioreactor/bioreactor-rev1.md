# Revision 1 of Octanis Instruments bioreactor

[Home](../../README.md) | [General documentation](./bioreactor.md)

Models were finished on 12.09.2019.

They were a few problems, which should be fixed in revision 2. The lid is made of 6mm MDF, which is spray-painted black. The main and the base are cut out of 5mm clear PMMA and assembled with acrylic glue.

## BOM

Here, we list all the parts required to make and assemble of the case.

### Materials

The dimensions of the materials sheets are specified so that they can directly be laser-cut.

- 3 600x400x5mm sheets of clear PMMA
- 1 400x500x6mm sheet of MDF
- 1 250x250x6mm sheet of MDF
- approx. 250g of black PLA filament for 3D printing
- 1 3D printer heat bed
- wood glue
- acrylic glue (special for PMMA)
- 1 can of black spray paint
- 4 rubber feet
- tape (to hold parts together while gluing)

### Tools

- 1 3D printer with print dimensions at least 15x12x5cm
- 1 laser cutter that can cut through 6mm MDF with cut dimensions at least 600x400mm

### Files

- [lid-v13.dxf](./exports/lid/mdf-6mm/dxf/lid-v13.dxf)
- [heater-air-channel-v6.stl](./exports/lid/heater-air-channel/stl/heater-air-channel-v6.stl)
- [lid-air-out-v3.stl](./exports/lid/heater-air-channel/stl/lid-air-out-v3.stl)
- [lid-air-through-v2.stl](./exports/lid/heater-air-channel/stl/lid-air-through-v2.stl)
- [main-v4.dxf](./exports/main/dxf/main-v4.dxf)
- [base-v18.dxf](./exports/base/5mm/dxf/base-v18.dxf)
- [small-pcb-case-v2.stl](./exports/base/small-pcb-case/STL/small-pcb-case-v2.stl)

## Bugs to fix on revision 2

### lid

- add hole for air input to main (on the laser-cut file)
- adapt slightly fan holes position

### main

- make overlap a lot bigger (set it to 30mm)
- adjust air input hole position

### base

- move big PCBs holes more towards the inside to leave space for the fan
- increase screen hole width by 3mm
- adjust fan fixation holes
