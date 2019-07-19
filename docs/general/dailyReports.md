# Internship at Octanis Instruments: diary

[Home](../../README.md) | [Weekly meetings conclusions](./weekly.md)

## June

### 2019.06.03 - w1

- signed contract
- setup computer
- installed apps (Fusion360, KiCAD, Git, VS Code), problem with installing Terminal for Windows
- **project to start working on:** remake the Xiaomi vacuum cleaner robot using Octanis' technologies

- saw parts already available for vacuum cleaner
- started getting used to Fusion 360
- **Note:** a big disadvantage od Fusion 360 )at least the free startup licence) is that you can't save the files on another support than AutoDesk -> no git (except for the exports)

**Remarks:** The approach to the vacuum cleaner that Sam asked me to follow is top-down: I must consider that all the electronics exist and work (-> abstraction!). It's different from all the other projects I have made where I prioritized a bottom-up approach. I could do that since I was working alone. Therefore, I have to learn **teamwork**.

### 2019.06.04

- continued working in Fusion 360 on front wheel part
- exported STL from Fusion 360
- installed the Prusa slicer and sliced STL file
- upgraded the firmware of one of the 3D printers -> refer to [this pdf](./Firmware_upgrade_guide_EN.pdf)
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

- [weekly meeting](./weekly.md)

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

**Remark:** We need to do things for the society's benefits and not always because they are fun.

### 2019.06.11 - w2

- tried fix both Prusa printers, which were under-extruding, resulting docs are [here](./apps/3D/prusa/prusaPrinters.md)
- printers have been fixed but the prints still have strange little dots on the vertical surfaces
- learned to make "folders" in Fusion 360 assemblies
- learned to make technical drawings in Fusion 360

- made 3D printed model of hinge and printed it out

**Results:** The hinge doesn't work in PLA. The plastic breaks instead of bending. This could be tried with some flexible material but isn't otherwise a good idea.

**Problem:** I need something to measure angles (protractor).

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
- understand what **H-bridges** are, what a **clamping diode** is and what **breaking current** does (current reflow due to motor free rotation)
- printed hinge bent, clip and bottom clip

### 2019.06.14

- cloned motor board project through https, didn't work otherwise (`git clone https://make.octanis.ch/oi/oibus-dc-motor-controller.git`)
- in fact, this is how you **clone with ssh**: `git clone ssh://git@make.octanis.ch:2222/oi/oibus-dc-motor-controller.git`
- discussed with Raph to understand general structure of the board and the enhancements to make
- started reading paragraphs of "The Art of Electronics"

### 2019.06.17 - w3

- try printing thermochrome filament of Robox -> it could be used to make cases that change color when something is heating up inside
- upgraded MK3 printer firmware
- moved things around with Sam (11-15), company business
- continued electronics theory doc

### 2019.06.18

- debrief meeting with Raph and Quentin
- learned more about transistors
- problems with 3D printer -> MINTEMP error...
- continued working on electronics: reverse engineering wheels
- wheel teardown and basic soldering (cables to analyse encoder signal)
- getting started with multimeter, oscilloscope, power supply

### 2019.06.19

- meeting with insurance people
- continued getting information about motors implied in the project
- working on motor board (KiCAD)

What next?

- repair 3D printer
- finish both pcbs (motor board and distance sensing board) and send for production
- verify that we have all the components necessary to solder these boards, if not, order them
- get lidar, screen and camera

### 2019.06.20

- finished motor board layout
- read Octanis Instruments Internal README
- watched KiCAD tutorials
- tried making logic gates using transistors

TO DO:

- watch this till the end! [https://www.autodesk.com/autodesk-university/class/Assemblies-Putting-It-Together-Fusion-360-2017#video](https://www.autodesk.com/autodesk-university/class/Assemblies-Putting-It-Together-Fusion-360-2017#video)

### 2019.06.21

- work on electronics theory
- initiate the logic gates building blocks project
- TO DO: order Coral usb stick
- started distance sensing board
- installed and started using STM32CubeMX

### 2019.06.24 - w4

- tried to make BOM for motor board (kicad and octopart) but encountered problems: the imported BOM parts were not recognized by octopart
- more problems in KiCAD with the motor board: cannot open schematic, error message ("error loading schematic file expected single character token in input source kicad")
- continued distance board -> have to make daughter board for perpendicular sensor: use edge connectors or make a rigid-flex PCB?
- quick explanation of Sam about the photo diodes and the micro-fluidics small projects

### 2019.06.25

- tried to laser cut test files and had a -Z limit error
- debug schematic of motor board and continue distance board
- start assembling 3 computer boards -> used solder paste and the pick and place

### 2019.06.26

- manage to use the laser cutter autonomously -> problems with Frame -> the cut doesn't start where the origin is
- continued learning kicad -> libraries import
- continued distance mother board

### 2019.06.27

- work on distance module: finished mother schematic and started layout

### 2019.06.28

- work on mother and daughter distance boards schematics and layouts
- continued watching KiCAD tutorial
- finally managed exporting BOM for motor and distance boards (in octopart)
- ran corner v15 3D print, which failed
- started set up of programming environment on Windows

## July

### 2019.07.01 - w5

- correct distance module mother board layout and learn exporting gerber files
- continue Windows setup for programming
- [weekly meeting](./weekly.md)

### 2019.07.02

- worked all day on the programming environment setup...
- managed to blink a LED

### 2019.07.03

- documented all process to be able to program an STM32
- generated BOMs for distance module
- started mobile robotics course w1
- managed to generate 4MHz frequency on NUCLEO board

### 2019.07.10 - w6 (wednesday)

- tried repairing both Prusa printers
  - bottom Prusa has **mintemp error** -> nozzle **thermister** not connected
  - top Prusa: a part of filament god compressed and it's diameter augmented. It is stuck at the entry of the head. Not possible to load new filament
- installed Ultimaker Cura to start printing corners, but the model is just too high -> the software wouldn't slice
- the repair of the bottom prusa failed because the temperature probe is stuck. I wasn't able to take it out after removing the necessary screws. I suppose it is caused by the plastic that is spread all over the head. I tried melting it using the heat gun for soldering, but it didn't work.
- soldered 3 distance module mother boards

### 2019.07.15 - w7

- problem: How to verify the electrical connections of the distance sensors on the mother boards?
- split corner part into two to print it on the Renkforce printers
- tried printing corner 2parts on the black PLA Renkforce
- update top, bottom and side in Fusion360 before laser cutting
- tried to laser cut these parts, but had problem exporting good dxf files -> construction lines were exported and apparently, they can't be hidden in a sketch
- installed Up Studio on the workspace Windows computer and ran print for Sam on the Cetus 3D printer
- installed Inkscape and removed unnecessary construction lines from DXF files -> not a very good method...

### 2019.07.16

- tried printing corner part 3 times, varying parameters
- printed top, bottom and lid of the oibus104 case: had problems with removing the support of the parts
- laser cut 9 faces for the xiaomi remake, the plexiglass available isn't big enough to cut top and bottom parts
- worked on mobile robotics course w2 and w3

### 2019.07.17

- started corner print
- started oibus104 lid print
- auto debrief (in weekly meetings)
- weekly meeting with Sam
- designed a spiral microfluidics mixer in fusion
- **Problem:** how to make a very thin and regular PDMS resin membrane?
- went to Obi to buy plexiglass for top and bottom parts (it costed 28.90 CHF)

**To do tomorrow:**

- [x] bring (and install?!) linux computer
- [x] laser cut top and bottom
- [x] make the stlink hack as Raf said
- [ ] design second microfluidics mixer
- [ ] check the CNC file generation in Fusion

### 2019.07.18

- ran corner impression
- made spreadsheet to manage work hours
- reassembled robot wheel
- laser cut top and bottom parts of the case out of PS
- worked on microfluidics with Thomas -> investigating the literature for mixers -> Coanda mixer (general shape traced in SVG in Inkscape)

### 2019.07.19

- ran print of 2 top corners (last one to get all the 8 corners)
- started case assembly. **Issues:**
  - the front wheel is too high -> it prevents the brush to touch the ground
  - the metal threads (melted in the corner parts) fill up with plastic and only one or two rotations with the screw are possible, which makes a very unreliable connection
  - the horizontal holes on the corners are flatten out during printing, which makes them to small to let the screws through (I had to drill though them). These holes should be made bigger.
- made wave and coanda mixers for microfluidics in fusion360
- continued assembly, they are a few things that fit nicely:
  - the screen
  - the lidar
  - the front wheel (even though it a bit to far away from the border)
  - the front wheel
- finished mobile robotics w3 theory
