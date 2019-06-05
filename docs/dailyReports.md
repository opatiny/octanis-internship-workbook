# Internship at Octanis Instruments: diary

## June

### 01.06.2019
- signed contract
- setup computer
- installed apps (Fusion360, KiCAD, Git, VS Code), problem with installing Terminal for Windows
- __project to start working on:__ remake the Xiaomi vacuum cleaner robot using Octanis' technologies

- saw parts already available for vacuum cleaner
- started getting used to Fusion 360
- __Note:__ a big disadvantage od Fusion 360 is that you can't save the files on another support than AutoDesk -> no git (except for the exports)

__Remarks:__ The approach to the vacuum cleaner that Sam asked me to follow is top-down: I must consider that all the electronics exist and work (-> abstraction!). It's different from all the other projects I have made where I prioritized a bottom-up approach. I could do that since I was working alone. Therefore, I have to learn __teamwork__.


### 02.06.2019

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
- 



### 03.06.2019

#### Weekly meeting conclusions

- use o-ring to connect pump to dust collector
- construct global case and create modules for distinct parts that are all the same height (can be on two floors)
- consider making an hermetic case for the core PCBs
- use metallic threads that are fixed in 3D printed holes (using a soldering machine)
- better put too much sensors than not enough -> consider 8 peripheral boards on the faces with distance, fall and bump detection + Lidar on top + camera (on front face?)
- consider that the wheels will be fully squeezed when robot working -> the wheels have a sensor that knows when the robot is lifted
- maximal height that can be 3D printed is about 20 cm
- pump should be fixed using three small printed parts that are screwed on top