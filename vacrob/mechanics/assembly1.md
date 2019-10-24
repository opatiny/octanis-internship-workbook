# First assembly of the VacRob case (2019.07.19)

[Home](../../README.md) | [Project main page](../vacrob.md) | [Links / References](../docs/refs.md) | [Mechanics doc](./mechanics.md)

## Files versions

- top v16
- bottom v14
- face v6
- corner bottom v2
- corner top v2
- front wheel fix v4
- hinge v4
- clip v2
- bottom clip v2

## Materials

- 5 mm acrylic glass (PMMA)
  - 8 faces
- 5 mm polystyrene (PS)
  - 1 top
  - 1 bottom
  - 1 flap
- Prusament PLA
  - 1 bottom clip
  - 8 corner top
  - 8 corner bottom
  - 1 front wheel fix
- FlexiSmart flexible filament
  - 2 hinges
- 86 M3x15 black nylon screws
  - fix top and bottom to corners (16)
  - front wheel (3)
  - hinges (8)
  - fix corners to faces (48)
  - top and bottom clip (2)
  - lidar (8)
- 61 M3 black nylon bolts
  - fix corners to faces (48)
  - top and bottom clip (2)
  - front wheel (3)
  - hinges (8)
- 16 M3x4 brass threads
  - melt into bottom and top corner parts
- 8 M3x8 double-female black nylon spacers

  - lidar

## Things that are good

- screen fits very well
- corners are the right size
- the flap closing system works -> flexible hinges were a good idea
- lidar fits
- side brush fits

## Things to enhance

- replace material used for top and bottom parts (PS) by plexiglass
- since the Prusa printers didn't work, the corner had to be printed in two parts. This has to be enhanced in further versions! Printing with the Prusas should also allow to print the M3 threads directly, which will increase the solidity
- The front wheel part has to be remodeled so that the wheel is not so high (as it is, the brushed wouldn't touch the floor).
- review the main wheels holes: when the robot is not touching the floor, the wheels should be "opened"
- find a way to fix the screen in place -> metal bars?
- model the 3D printed part that will fix the wheels
- finish modeling the dust collector/pump interface

## More precise comments

### Faces

The parts are cut in 5mm thick clear PMMA. The cut parameters used were:

- speed: 6mm/s
- max power: 100%
- min power: not defined

### Top and bottom

Because the PMMA sheets available were too small to cut the top and bottom, some new material had to be bought. However, due to bad advice, polystyrene (PS) was bought instead of PMMA. Yet, PS can also be laser-cut. One of it's disadvantages, though, is that it is breakable (it cracks easily). To be able to laser-cut the parts, the initial sheet (1000x500x5mm) had to be cut in two using a jigsaw. This was not a god idea for two reasons: the PS was scratched ba the machine and it cracked a bit in some places.

After some testing, the best method to cut this material seemed to be by covering it with masking tape. So, the two PS parts were covered with tape, and then taped to the bed of the laser cutter, to keep them as flat as possible. A problem occurred both times while cutting the parts: the cutter suddenly stopped in the middle of the cut. To fix that, I clicked "Stop" and then "Start" again, but I only turned the laser on when I reached the point where the cut had previously stopped (be careful not to lose the origin by clicking "Home").

Another problem with PS is that the cut is not as clean as with PMMA, and some of the melted plastic goes under the parts. It was removed using a metalic spatula.

The parts are cut in 5mm thick clear PS. The cut parameters used were:

- speed: 4mm/s
- max power: 100%
- min power: not defined
