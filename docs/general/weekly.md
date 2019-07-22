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
