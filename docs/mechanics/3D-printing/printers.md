# 3D printers cheat sheet

[Home](../../../README.md) | [Prints parameters](./printsParameters.md)

Click [here](./printsParameters.md) to consult the parameters of all the prints that were realized.

## PrusaSlicer

When you want to print something, you first have to slice it. They are software that allow todo that specifically for certain printers. We use Prusa 3D printers. The corresponding slicer is PrusaSlicer:

[https://www.prusa3d.com/drivers/](https://www.prusa3d.com/drivers/)

Once in the slicer, select the quality of print (std 0.2), the filament type (std Prusament PLA) and the infill (std 25%).

Then click on generate "Slice now" and then on "Export G-code".

To vary the slicer setting and the type of pattern of the top and bottom layers and the infill: [https://manual.slic3r.org/expert-mode/print-settings](https://manual.slic3r.org/expert-mode/print-settings)

## Prusa printers issues

### Firmware update of Prusa printers

**Note:** The plug for the cable is on the top of the black box on the left.

-> refer to [this pdf](./Firmware_upgrade_guide_EN.pdf)

### Head thermistor replacement

**Procedure:** [https://manual.prusa3d.com/Guide/How+to+replace+thermistor+in+the+Extruder/496](https://manual.prusa3d.com/Guide/How+to+replace+thermistor+in+the+Extruder/496)

**2019.07.10:** The replacement of the thermistor first failed because the temperature probe is stuck. I wasn't able to take it out after removing the necessary screws. I suppose it is caused by the plastic that is spread all over the head. I tried melting it using the heat gun for soldering, but it didn't work.

<img src="./prusa_errors/error_mintemp.jpg" alt="mintemp error prusa printer" width="50%" class="center">

<img src="./prusa_errors/error_mintemp.jpg" alt="mintemp error prusa printer" width="50%" class="center">

## Fixing under-extrusion problems and general maintenance

Remove a blob: [https://www.youtube.com/watch?v=mSmJKjibMT0](https://www.youtube.com/watch?v=mSmJKjibMT0)

Clean a clogged nozzle: [https://www.youtube.com/watch?v=g8uvh6kvr54](https://www.youtube.com/watch?v=g8uvh6kvr54)

### Procedure

- preheat to right filament temperature and unload filament
- if there is a **blob** of plastic, use a pair of **pliers** to unstick it (while hot)
- remove rests of plastic on the nozzle either with **metal wool** or a **brass brush**
- use an **acupuncture needle** to free the nozzle

- **unscrew** the sides of the head to be able to put filament in or out by hand
- the head can be pull of **plastic dust**, if it is, use **cotton swabs** or a tissue to remove it (I put isopropanol to clean more easily, don't know if it's a good idea. Could it partially dissolve 3D printed plastic parts?)
- load a resistant and "elastic" plastic like **nylon**, I tried with PET
- cool the nozzle down to around 100 degrees (I tried 120, 110 and 100 degrees, but never really worked well)
- firmly pull on the filament to take it out (this is called a **cold pull**), you can repeat this a few times
- close the head
- load filament

- clean dirt from rectified axes
- **grease** them again
- clean printing surface with **isopropanol**

- print a part to check if all the things you did were at all useful...

## Errors

### MINTEMP

If you get that error and have the nozzle temperature that is 0/0°, there probably is a connection problem at the level of the temperature probe of the nozzle.

<img src="./prusa_errors/error_mintemp.jpg" alt="mintemp error prusa printer" width="50%" class="center">

## Renkforce 3D printers

### Ultimaker Cura

The appropriate slicer for the Renkforce 3D printers is Ultimaker Cura:
[https://ultimaker.com/en/blog/52831-simplify-3d-printing-with-ultimaker-cura-40](https://ultimaker.com/en/blog/52831-simplify-3d-printing-with-ultimaker-cura-40)

## Cetus3D printer

### Up Studio

The slicer for the Cetus3D printer is called Up Studio:
[https://www.tiertime.com/up-studio/](https://www.tiertime.com/up-studio/)
