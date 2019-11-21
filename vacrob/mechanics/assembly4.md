# Fourth assembly of the VacRob case (2019.11.20)

[Home](../../README.md) | [Project main page](../vacrob.md) | [Links / References](../docs/refs.md) | [Mechanics doc](./mechanics.md)

This is the last version of the VacRob which has been assembled during the internship.

## Files versions

- top v18
- bottom crosstalk v4
- face v9
- pump face v11
- corner v20
- front wheel fix 2 v8
- hinge v4
- clip v2
- bottom clip v2
- dust collector pump v16
- pump output v4
- wheel fix v11
- main brush spacer v

## Materials

- 5 mm acrylic glass (PMMA) -> three 500x500x5 sheets are perfect
  - 1 bottom
  - 1 top
  - 1 flap
  - 7 faces
  - 1 pump face
  
- Prusament PLA
  - 1 bottom clip
  - 8 corners
  - 1 front wheel fix
  - 2 wheel fix
  - 1 pump dust collector part
  
- FlexiSmart flexible filament
  - 2 hinges
  - 1 pump output
  
- M3x15 screws (black nylon and clear acrylic)
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

- M3 black nylon bolts
  - fix corners to faces (48)
  - top and bottom clip (2)
  - front wheel (3)
  - hinges (8)
  - big PCB (4)
  - main brush (4)
  - small brush (3)
  
- 16 M3x8 double-female black nylon spacers
  - lidar (8)
  - big PCB (8)

### Modifications following third assembly

- faces and bottom were modified to include the crosstalk hacks
- crosstalk parts were modeled and 3D printed
  - the part for the horizontal sensor is a cone which leaves the distance sensor directly exposed to the outside -> it allows to have the full sensor range and precision
  - the part for the vertical sensor is a kind of wall separating the emitter and the receiver of the sensor, therefore avoiding crosstalk. We didn't do a cone in this case because the sensor is very close to the ground and exposed to dust. Also, the required precision isn't as high.
- all the parts are cut out of plexiglass to see the interior of the robot
- small PCB case 2 are used, which were also necessary because of the crosstalk problem: the threads have been placed on the sides so that the vertical distance sensor is as close as possible to the ground.

### Things that are good

- the relative position between the main brush and the dust collector pump part is quite good
- the flap allows to take out the dust collector
- the bumper hole is better than before

### Things to enhance

- still adapt the position of the flap a bit
- model a part that will act as a spacer for the main brush that would also guide the dust (avoid it to go everywhere in the robot)
- cut the top and bottom out of acrylic glass, the faces as well? -> is it still too early?
- find a solution to the side brush position: as it is, it doesn't allow to clean the corners well
