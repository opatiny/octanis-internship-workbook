# Weekly meetings

[Home](../../README.md) | [Daily reports](./dailyReports.md)

## 2019-06-05 10:00h

- use o-ring to connect pump to dust collector
- construct global case and create modules for distinct parts that are all the same height (can be on two floors)
- consider making an hermetic case for the core PCBs
- use metallic threads that are fixed in 3D printed holes (using a soldering machine)
- better put too much sensors than not enough -> consider 8 peripheral boards on the faces with distance, fall and bump detection + Lidar on top + camera (on front face?)
- consider that the wheels will be fully squeezed when robot working -> the wheels have a sensor that knows when the robot is lifted
- maximal height that can be 3D printed is about 20 cm
- pump should be fixed using three small printed parts that are screwed on top

## 2019-06-12 10:00h

- Send distance sensor board datasheet
- Electronics
  - Computer
  - 10 channels
  - Motor, feedback from Raffael on modifications needed (encoder, temp, different chip)

* Things to get:
  - Screen
  - Camera
  - Lidar
  - Plexiglass 5mm transparent
  - Screws: M3x12 (100),
  - Angle measurement device
  - Brass brush
  - Nylon 3D printer filament
  - Battery

My remarks:

- resumed the things I learned in Fusion (assembly, technical drawing) and how to repair the 3D printers (cold pull)
- understand H bridge
- find / reverse engineer wheels motors pin-out
- try printing hinge in flexible material!
- add an easy way to remove the battery for recharge!

## 2019-06-12 10:00h (without Sam)

Things to do soon:

- finish motor board
- make distance sensing board
- start understanding coral
- start understanding lidar

Things to get:

- Coral USB stick
- Screen
- Camera
- Lidar
- Screws
- Battery

## 2019-06-26 10:00h (without Sam)

Progress of last week specifically on the vacuum project is not very big. Lots of parentheses have been done (testing things with the 3D printer, the laser cutter, learning about transistor logic).

To do next week?

- priority 0 : finish and order distance boards (-> investigate rigid-flex PCB?), understand how to export good BOM and import it to Octopart
- priority 1 : get missing parts (lidar, camera, battery)
- priority 1 : setup computer for STM32 programming and write basic program (-> photo-diodes small project)
- priority 3 : continue fusion 360 parts for vacuum cleaner
- priority 4 : investigate micro-fluidics application

## 2019-07-01 11:00h

Recap of last weeks:

- made various tests with the 3D printer, tried printing other PLA filaments (glow in the dark, thermochrome) and encountered problems with adhesion
- cleaning the 3D printers after a fail disconnected the head temperature probe and the printer doesn't work anymore
- made laser cutter tests
- design of motor and distance boards
- tried assembly of computer board, saw how the pick and place works
- tried to understand transistor logic
- started looking for micro-fluidics application
- started programming environment setup

WHAT NEXT?

- **the goal** would be to have a first prototype that can roll forwards in a few week
- order the motor and distance sensing PCBs
- assemble the necessary PCBs
- start basic programming of STM32
- start learning the theory about autonomous robots and their interaction with the environment -> follow courses
- at some point, make first tests with **PDMS resin**: should we consider integrating sensors/heating inside the device?
- if time: **FPGA** -> for low level "programming", assign connection between and or and not gates to obtain some output

## 2019-07-17 10:00h - auto debrief

**Global remarks:**

- the mobile robotics course is interesting, but I have problems installing a good programming environment in Python -> how to I manage packages?!
- trying to repair the Prusa 3D printers is really depressing, didn't manage to fix one -> I should now disassemble the hotend completely -> this might allow to fix one of the two printers, the other one should definitely have the hotend replaced

**Xiaomi remake:**

- the electronics have progressed well
- three distance sensing mother board were soldered -> how to test them?
- the daughter boards were ordered
- **Problem : software.**
  - start programming the different boards
  - understand how the **lidar** works
  - understand how the **screen** works
  - how to control the **pump** part?
- have to buy bigger plexiglass sheets to laser cut **top** and **bottom** parts of the case
- 3D printing **corners** in 2 parts on the Renkforce -> not the best, also, the threads don't work -> I'll have to use the brass threads to melt in the parts

**Microfluidics:**

- how can I make a valve??
- can I have many different pressures at the same time?
- design mixer in Fusion and try 3D printing it in ABS
- cast model in PDMS and dissolve it with acetone

**oibus104 case and Cetus3D printer:**

- not able to remove the supports in a clean way -> how to enhance that?

## 2019-07-17 11:00h

- problems with python

  - use [Jupyter](https://jupyter.org/install.html) for plotting in the browser

- program the firmware

  - spend time understanding the code structure [https://make.octanis.ch/oi/oibus-dc-motor-controller/tree/master/stm32-freertos-firmware-oibus104](https://make.octanis.ch/oi/oibus-dc-motor-controller/tree/master/stm32-freertos-firmware-oibus104)

- microfluidics valve
  - [http://2016.igem.org/Team:Uppsala/Project/Microfluidics](http://2016.igem.org/Team:Uppsala/Project/Microfluidics)
  - look image with keywords "microfluidic pneumatic valve"
- how to easily bond PDMS and Plexiglass
  - microwave? -> [https://www.youtube.com/watch?v=fMUemBZ0k5Q](https://www.youtube.com/watch?v=fMUemBZ0k5Q)
  - [http://2018.igem.org/Team:Madrid-OLM/HardawareMicrofluidics#workflowPDMS](http://2018.igem.org/Team:Madrid-OLM/HardawareMicrofluidics#workflowPDMS)
  - channels thickness: 1 mm wide and 0.5 mm high

## 2019-07-22 11:00h

- once the robot is assembled, focus on ROS, model it in ROS
- need to make the dual boot on my computer
- once the robot will be working, how should it interact with the users?
  - add a microphone?
  - add LEDs to show that it's "thinking" about the next move?
  - what should the screen be showing at different moments?
- model part that would go on top of mechanical endstop

## 2019-07-31 17:00h

- when I come back, move to assembly!
- test PCB, order more
- solder all PCB so they are available for:
  - sniffer
  - robot
  - bio-reactor
- work on software a lot
- order some PCB myself
- use the pick and place independently

## 2019-09-09 10:00h

- I have to work on software/firmware
- this week is dedicated to getting a finished bioreactor case -> must be finished on thursday!
- we have special plexiglass glue

## 2019-09-23 15h00

- they are a few problems with the bioreactor case that should be fixed following Sam's feedback
- it is time to move to firmware in general, but for this it would be necessary to have a possibly moving first prototype of the VACROB -> design the 3D parts to fix the wheels and fix them! Add holes if necessary. If it's too messy, just cutout another bottom out of mdf. Also, print new corner parts with the Prusas!
- In the scope of intership, it is written that I should learn some React -> this might be done on the screen of the VACROB, but it is not a priority
- start working on the sourcing of parts: make an alibaba account and try working on the order of cables for the gas particles sensor

## 2019-10-07 15h00

- point on the vacrob hardware -> dust collector and main brush not aligned, dust collector can't be taken out -> swap lidar and flap
- for the C programming, check Boulic's course for structure and syntax
- learn how to make a Makefile and use the `make` command
- try getting the calendar to work on the distance board
  - set it up properly in CubeMX
  - find the callback function that will act on the alarm
  - it is supposed to be on EXT line 17
- check [HAL documentation](https://ikea.octanis.ch/index.php/apps/files/?dir=/Octanis%20Instruments/Engineering/STM32_fw&fileid=83148) for the necessary functions (on the Drive)
- Urgent: get these Grove cables!
- use Alexa as a microphone for bump swearing?

## 2019-10-14 10h00

- resumed last week:
  - learning C programming
  - finished mini linked list module in C
  - worked on MR course weeks 4 to 6
- spoke about moving forwards: start with hardware programming
  - firmware for distance module
  - firmware for dc motor board encoders

## 2019-10-21 15h00

- Sam helped me debug some firmware -> the memory allocated to my thread was too small
- Still, the DataInit() function is crashing the debugger -> dive in by commenting everything and slowly un-commenting stuff
- Installed Microsoft chat -> new work platform
- my idea: since the Alibaba manufacturer doesn't seem super reliable, order some of the ZHR and Grove cables to have a backup (to solder by hand)
- the [Contrel](https://contrel.com/fr/accumulateur-d-energie/) webpage is working again -> chose the appropriate battery for the vacrob (battery should be max 12 volts and with a big capacity and a reasonable price)
- 6 weeks to go: I won't have time to learn resin printing, but maybe CNC and how to export files for it from FUsion 360
- I'll learn UAVCAN when I'll have to publish the distance value from the distance module

## 2019-10-30 16h00

- summed up advances on firmware
  - add bus to the parameters of the distance sensor api
  - add tasks for the two distance sensors
  - uavcan messages working and basic configuration from gui tool
- checked that the custom cable is good
- showed the enhancements of mechanics assembly 3
- talked about what next
  - write firmware for encoders on dc motor board
  - get the lidar to work?
  - setup ROS on the raspberry pi of the mother board
  - added the screen to the mother board

## 2019-11-07 16h00

- summary of last week
  - worked on MR course
    - w5 exercises -> 3D plot
    - w8 theory
  - got VNC server in place
  - connected raspi of vacrob to the wifi

To Do next:

- get the lidar to work
  - try connecting it by USB
  - check if the TX data is at logic 5V -> if it is it probably fried the port of the raspi (which works in 3.3V)
- manage to show the data of the lidar on the touch screen
- solder 8 distance modules and flash them
- finish assembling vacrob
- print 7 small PCB cases
- modify some old motor board firmware to make an application specific fw: read the messages on the can bus and modify the motors' speed depending on the distances published by the 8 boards
  - keep robot in the middle of a corridor
  - make it stop if any object is closer than 10cm
  - make it stop in case the vertical distance sensors detect void

Ideally:

- install the mp3 module in the vacrob -> GPIO input -> leads to playing an mp3 file
- put some mp3 files on a micro-sd card
- play mp3 files when bumping into walls

## 2019-11-15 11h30

- progress of the week:
  - lidar is working and showing the scan in full screen -> still has to launch automatically!!
  - distance module rev2 were soldered
  - the new module works! -> able to plot both distances and bumper
  - tried to make the mp3 module work, but didn't manage
- to do:
  - use Alexa as bluetooth speaker to play sounds?

## 2019-11-22 14h30

- progress of the week:
  - soldered 5 dist modules rev5
  - 3 of them work for sure
  - made assembly 4 of vacrob hardware: implementing crosstalk hacks
  - finally managed to have rviz run at boot
- now:
  - having troubles with the uavcan bus -> messed up with the cables
  - have to start programming the motor module!

## 2019-11-27 15h00

- progress of the week
  - working on the fw of the motor board very intensively
  - managed to get multiple boards on a CAN bus
  - managed to get a motor reacting to the measurements of multiple distance boards
- internship review

TO DO: Write documentation for someone to continue working on the project!
