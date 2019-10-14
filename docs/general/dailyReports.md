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

### 2019.07.22 - w8

- daughter board of distance module arrived
- made spreadsheet to follow progress
- ran oibus104 lid print with lower head temperature -> hoping support will not stick
- made clean distance module [mother and daughter boards BOM in drive](https://docs.google.com/spreadsheets/d/1pxoK0e-CQp6b5M1Pq0CEsW51kXmuiHIKJI44d73KfLo/edit?usp=sharing)
- soldered 3 distance module daughter boards
- made dual boot Windows/Xenial and started installing useful things on the Ubuntu (npm, kicad, curl, cubemx, anaconda, vscode)

### 2019.07.23

- synced VScode settings on Ubuntu
- tried using python
- installed ROS
- watched Mobile Robotics w4
- started looking up at Robot Mapping course
- finished MR w1 sheet0

### 2019.07.24

- spent all day programming in python and solving Mobile Robotics w1 sheet1

### 2019.07.25

TO DO (till 31.07.3019):

- install programming environment of STM32 on Ubuntu
- find a way to fix wheels on the robot (hardware)
- solder motor boards or wait for Raph to do that?
- print cases for the distance sensing boards
- start setting up ROS
- (continue working on Mobile Robotics)

Did:

- print small PCB case on Cetus3D, two first prints failed because of bad calibration
- setup programming environment for stm32 on Ubuntu
- blinked LEDs on distance module

### 2019.07.26

- tried to run small PCB case print, but Cetus3D was under-extruding
- fixed the Cetus3D printer
- printed 5 small PCB cases
- wrote doc about programming environment for STM32 on Ubuntu
- read and documented about FreeRTOS

### 2019.07.29 - w9

- tried to print 4 cases for small PCB again, but print failed many times
- spent a lot of time repairing Cetus3D printer: made new glue layer on bed, calibrated a few times, ...
- continue reading FreeRTOS documentation
- started reading article for CO2 extraction from seas
- none of the small PCB cases prints succeded -> did not stick to bed well
- started programming distance module: implemented bumper functionality

### 2019.07.30

- tried printing small PCB case and had problems again with adhesion
- repaired bottom Prusa with Sam!!! (hotend replacement)
- programmed STM32 and managed to have it appearing on the UAVCAN GUI Tools
- had libcanard partly explained by Sam
- **lesson learned today: NEVER leave batteries in a battery pack unattended!** I nearly started a fire at the office today, because a battery was left in the battery packs Sam gave me for the rover (18x650 batteries). One of the cables of the battery pack touched a contact of for another battery and made a short-circuit: the thing started smoking and all the contact got red in seconds...

### 2019.07.31

- tried working on code and especially I2C communication, but had no results
- repaired top Prusa printer
- printed 2 missing small PCB cases on bottom Prusa
- weekly meeting

## August : HOLIDAYS

## September

### 2019.09.02 - w10

- modeling in Fusion part for gaz bottle (for the bioreactor) -> tricky because the thread is not standard...
- modeled new version of the front wheel part

### 2019.09.03

- tried modeling custom thread in Fusion 360
- printed thread: too tight, but the profile seems good -> too try again tomorrow
- tried printing front wheel part twice but print failed
- assembled top face of three dc motor boards

### 2019.09.04

- rework the dc motor pcbs
- enhance gaz bottle custom thread
- print custom thread again -> it fits!
- incorporate custom thread to the interface part and print it
- start designing bioreactor lid

### 2019.09.06

- finished bioreactor lid design
- assembled lid in Fusion
- 3D printed gas bottle adapter after fixing minor design problems -> tried it on full co2 can and didn't work
- tried to laser cut lid in grey MDF -> fail: unable to cut through the material
- laser cut lid in 6mm MDF and glued the case together
- spray painted lid in black (aesthetics and humidity protection)
- upgraded MK3 Prusa printer firmware
- started a print of the new front wheel part

### 2019.09.09 - w11

- managed to print the front wheel part rev2 -> with 15% filling it broke. Also, the bottom Prusa under-extruded which doesn't allow the wheel to get nicely in place
- work on bioreactor lid air channel in Fusion
- start 12h30 print of main air channel part
- weekly meeting with Sam
- printed small PCB case for bioreactor
- modeled main part of bioreactor case in Fusion360
- started modeling base for bioreactor case

### 2019.09.10

- bioreactor air channel print succeeded!
- print small pcb case
- print air selector
- adapt lid to fit air channel part
- model base of bioreactor case
- soldered leds on a motor board

### 2019.09.11

- fixed bugs on main and base models of bioreactor case
- laser cut base (v18) and main (v6) -> problems again with origin -> frame does not correspond to the place where it cuts
- assembled base and main
- fixed minor bugs on the models (base and main)
- was sick so went home

### 2019.09.20 - w12 (Friday)

- listen to Raffael's meeting
- continue working on MR course, worked on the python exercises of w1 and w2

### 2019.09.23 - w13

- continue working on MR course weeks 3 and 4
- try understanding a bit of probabilistic theory
- weekly meeting with Sam
- created alibaba account
- ran a print of 4 corners for the vacrob using the top prusa

### 2019.09.24

- corners print succeeded, so ran another print (to get the 8 corners)
- work on vacrob main wheels fix part.
  - made a picture of the part and imported it in Fusion as a canvas
  - used the picture to get a general shape/sketch
  - exported the general shape as a dxf and laser-cut it to see how accurate it is
  - made 2 laser-cutting tests
  - started making the 3D model, exported it as STL and 3D-printed it
- checked the alibaba answers for the cables
- wrote doc and managed work hours (drive)

### 2019.09.25

- updated wheelFix after looking at the problems of the first print
- updated firmware of both Prusa printers
- started print of updated wheelFix (v10)
- checked alibaba
- worked on dust-collector / pump part in fusion360 -> having problems with the maximal part size
  - tried to minimize the amount of material necessary
  - I had problems with realizing a loft and had to make many hacks
  - imported an image of the pump as a canvas -> this works quite well
- Idea: I could try taking pictures of the PCBs of Octanis Instruments -> stuff to put on the web page
- made drawing of new custom cable needed and sent to manufacturer
- started print of the dust collector / pump part
- start one more print of wheelFix, after making a few modifications
- updated the assembly

### 2019.09.26

- print of dust collector pump part astonishingly succeeded, the supports were quite difficult to take off

### 2019.09.27

- went to obi to buy 5mm thick MDF
- start print of mirrored wheelFix v11
- wrote documentation about bioreactor case
- laser cut bottom of vacrob in 5mm MDF (had usual problems with the laser cutter -> frame is not where it cuts and cut stops in the middle)
- started assembling wheels and all the rest -> many holes were misplaced

### 2019.09.30 - w14

- check Alibaba for custom cable (still...)
- laser-cut bottom v17 (taught Laurence how to use the laser cutter)
- assembled vacrob again
- start print of frontWheelFix2 v8

## October

### 2019.10.01

- worked on documentation of vacrob
- checked alibaba for custom cable
- tried finding appropriate card edge connector for vacrob big wheels
- assembled electronics of vacrob

### 2019.10.02

- continue assembly of vacrob
- made the four DC motors work with Sam -> they were problems with the control (couldn't go forwards then backwards)
- checked alibaba for custom cable
- worked on MR course w5
- designed pump output part: supposed to lead the air out of the robot -> flexible filament

### 2019.10.03

- start print of pump output in FlexiSmart -> there's a problem with the bottom Prusa: auto-load filament doesn't work
- enhance pump face in Fusion and update assembly of vacrob
- installed programming environment with debug on ubuntu
- learned about control theory
- started familiarizing with the c syntax and linked list specifically

TODO:

- [x] install CubeMX on Xenial
- [ ] try to get distance sensor output using bare metal code
- [ ] find a way to have exact time on microcontroller in CubeMX -> be able to execute a task every 12 hours
- [x] make pump output part 6mm longer

### 2019.10.04

- start print of hinge bent for vacrob flap
- laser-cut pump face in plexiglass
- modify design of pump output part
- learn C programming


### 2019.10.07 - w15

- continue learning C programming
- wrote bash script to compile and execute C scripts
- start learning how to use Makefile
- check alibaba for card edge connector (really bad results) and grove cable
- weekly meeting with Sam

### 2019.10.08

- update work hours management -> 1 hour incoherence...
- try understanding makefiles
- finally managed to manipulate h files
- worked on linked lists in C

### 2019.10.09

- check alibaba for grove cable, still
- finished linked lists module
- laser-cut spectro case for Sam
- worked on MR w5

### 2019.10.10

- check alibaba for custom cable and update issue on gitlab
- work on MR course theory w5 and w6
- work on MR course exercises w4

### 2019.10.11

- work on MR course exercises w4
- talk with Guillaume about micro-controllers and C programming

### 2019.10.14 - w16

**Goal of the day:** start programming the robot 
- work on distance board firmware -> retrieve values of distance sensor
- work on dc motor board firmware -> implement encoder reading

- weekly meeting with Sam
- debugged hardware of distance board
- working on distance board firmware -> distance sensor
  - I have to base myself on this project for the I2C: [https://make.octanis.ch/oi/oibus-mini-mikrobus/blob/master/mikrobus-freertos-firmware](https://make.octanis.ch/oi/oibus-mini-mikrobus/blob/master/mikrobus-freertos-firmware)
  - download the sensor API and find out what are the functions that I'll need to use
- started reading VL53L API user manual
