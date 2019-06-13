# Internship at Octanis Instruments: diary

## June

### 2019.06.03 - w1
- signed contract
- setup computer
- installed apps (Fusion360, KiCAD, Git, VS Code), problem with installing Terminal for Windows
- __project to start working on:__ remake the Xiaomi vacuum cleaner robot using Octanis' technologies

- saw parts already available for vacuum cleaner
- started getting used to Fusion 360
- __Note:__ a big disadvantage od Fusion 360 )at least the free startup licence) is that you can't save the files on another support than AutoDesk -> no git (except for the exports)

__Remarks:__ The approach to the vacuum cleaner that Sam asked me to follow is top-down: I must consider that all the electronics exist and work (-> abstraction!). It's different from all the other projects I have made where I prioritized a bottom-up approach. I could do that since I was working alone. Therefore, I have to learn __teamwork__.


### 2019.06.04

- continued working in Fusion 360 on front wheel part
- exported STL from Fusion 360
- installed the Prusa slicer and sliced STL file
- upgraded the firmware of one of the 3D printers
- printed front wheel part: print lasted around 1h17 and came out good at the first time, yet, the wheel is really difficult to push in the part

- studied the different parts designs: corner, face and top
- modeled the corner part in Fusion 360

- modeled face part in Fusion 360

- realized a test of how small a thread could be 3D printed (20, 10, 5 mm). All threads came out good. Smaller sizes should be tried out! This shows that 3D printed threads could be used in projects without being too bulky.

#### To do tomorrow

- try assembling parts in Fusion 360
- think about the best way to scan the environment
- design top part
- think better about how to fix outer PCBs


### 2019.06.05

- modeled and printed second thread test (M5, M4, M3, M2, inner threads) -> they seem to work all fine and well fitted. However, the surface of the part is flawy.

- continued modeling face
- started modeling top

- adapted small PCB box to the vacuum cleaner

- weekly meeting

### 2019.06.06

- continued working on top part (globally finished)
- modeled bottom part
- modeled laser cutter test

- tried making forms in Fusion 360, but didn't manage. Problems with selection of objects and these "T-splines".

- made 3D models based on the 2D models for face, top and bottom


#### To do tomorrow

- make dust collector / pump part in Fusion 360

### 2019.06.07

- made assembly of bottom, corners, faces, top and flap
- How do I create folders in a Fusion 360 file?
- learned to import designs from McMaster-Carr database in Fusion 360

__Remark:__ We need to do things for the society's benefits and not always because they are fun.

### 2019.06.11 - w2
- tried fix both Prusa printers, which were under-extruding, resulting docs are [here](./apps/3D/prusa/prusaPrinters.md)
- printers have been fixed but the prints still have strange little dots on the vertical surfaces
- learned to make "folders" in Fusion 360 assemblies
- learned to make technical drawings in Fusion 360

- made 3D printed model of hinge and printed it out

__Results:__ The hinge doesn't work in PLA. The plastic breaks instead of bending. This could be tried with some flexible material but isn't otherwise a good idea.

__Problem:__ I need something to measure angles (protractor).

- thought to use only small PCB format but:
  1. all the boards just can't be in the small format (like the motherboard)
  2. the goal is to show both formats

  Notes to self:
  - making all the 3D printed parts for each component will be difficult because they have weird shapes, also, I will have to find a way to manage overhangs -> use supports
  - it would be good to get the main missing parts (lidar, screen, camera)
  - I should start making the missing PCBs, since they take a long time to arrive (1 week at least), I could continue to do things in the mean time
  - I could run my laser cutter test tomorrow
  - try to make work the different parts I already have and understand the technologies they use (i.e.: the wheels and DC motors)

### 2019.06.12

- started collector-pump part model
- weekly meeting
- learned to add new filament parameters to Prusa Slicer
- tried to print hinge out of FlexiSMART
- modeled clip in Fusion 360
- flexible hinge worked perfectly, but was really difficult to get off the bed of the printer (-> see [video](../xiaomiRemake/docs/pictures/flexHinge.mp4))

### 2019.06.13

- made bottom clip : a part to keep the flap closed
- after discussion with Raph : I should start working on the PCBs, especially the motor board (clone the project and create folder "rev2")
- understand what __H-bridges__ are, what a __clamping diode__ is and what __breaking current__ does (current reflow due to motor free rotation)