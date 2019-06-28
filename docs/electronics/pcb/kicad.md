# KiCAD : things good to know

[Home](../../../README.md) | [Rigid-flex PCB](./rigid-flex.md) | [Electronics theory](../theory/theory.md)


## Tutorials and links
General introduction:
[youtube.com/watch?v=zK3rDhJqMu0](youtube.com/watch?v=zK3rDhJqMu0)

Whole KiCAD serie:
[https://www.youtube.com/watch?v=vaCVh2SAZY4&t=313s](https://www.youtube.com/watch?v=vaCVh2SAZY4&t=313s)


## Shortcuts

__? :__ for shortcuts help

### Sketch

__a :__ add component
__e :__ see parameters of component
__g :__ grab 
__m :__ move
__p :__ add power component
__r :__ rotate
__q :__ add a NC symbol

- __no connect :__ blue cross on the right toolbar
- edit the text at the bottom of a sketch: File -> Page Settings
- add __power flags__ every time you have a tension difference at a connector
- run debugger once schematic is finished -> you should correct all the errors

### PCB

__o :__ add component
__x :__ trace
__v :__ via while drawing a trace or change the fronting face
__e :__ access properties of component
__f :__ move component to the other face
__d :__ move tracks according to design rules and nice angles
__b :__ refill zones
__u :__ select wire till next intersection
__i :__ select whole wire

__Ctrl + d :__ duplicate / copy

- __copper zone:__ click on right layer -> add filled zone (right menu)
- edit __zone priority level__: press "e" while on zone and modify "Zone priority level", the bigger the number, the higher the priority
- __update copper zone :__ right-click on zone -> Zones... -> Fill
- __edit design rules :__ 
- __ratsnest :__ all of the airwires

## Import new footprints
__DigiKey :__
- go on DigiKey : [https://www.digikey.com/](https://www.digikey.com/)
- search for your part by typing it's reference
- chose the right category (i.e.: Sensors, Transducers)
- you will have many possibilities for your component, click the one where you can buy only one part and without the Digi-Reel packaging
- go under Documents & Media
- go under EDA / CAD Models and click on the part "by SnapEDA"
- click on Download Symbol and Footprint -> KiCAD

__Component search engine :__
[http://componentsearchengine.com/](http://componentsearchengine.com/)


## Create new footprints

When opening a project, the symbol and footprint editors are in Preferences.

### Schematic

### Layout

## Rules to apply for good PCBs

- always rather __protect to much__ than not enough -> for instance power inputs, protect for inverted inputs
- __avoid acute angles__, which make acid traps -> acid remains at these places after board finished and slowly eat the copper traces (not so mush this problem anymore). Yet other problems could occur with high frequencies signals: reflection -> interferences, magnetic fields induced
- use the 3D viewer after making the layout to be sure the labels are well visible
- make thicker wires for power traces, all signal traces can be thin (leds, communication)
- place capacitors next to the source of the signal you want to filter (inductances as well)
- try to have no errors at all with the bug checker in the schematic

## Creating BOM (bill of materials)

Two distinct BOMs are created. First, a complete BOM is generated based on the KiCAD layout and is added to the folder so that the person assembling the PCB has an exhaustive list of the components he needs. Secondly, a BOM with only the components specific to the board is created in [octopart.com](octopart.com), which allows to directly order all the parts on DigiKey.

### Export BOM from KiCAD

Click on the export BOM icon on the schematics and use the following command (adapt the path!!), then click generate

```
python "/Users/raffael/Desktop/OctanisOÜ/Octanis Instruments/Engineering/KiCAD/BOM_tool/gistfile1.py" "%I" "%O_BOM.csv"
```

Adapted to my computer (doesn't work, exports .xml):
```
python "C:\Users\opatiny\Nextcloud\Octanis Instruments\Engineering\KiCAD\BOM_tool\gistfile1.py" "%I" "%O"
```

Good to know: __MPN__ = manufacturer part number

## Various issues

### "error loading schematic file expected single character token in input source kicad"

<img src="./schematic-error.jpg" alt="schematic error message" width="50%" class="center">

This error appeared after I added MPN fields in the components description, closed my schematic and tried to open it again. After looking at the text file, it appeared that they were extra CR (carriage return) were the MPN fields were defined. They were removed using a regular expression, which fixed the problem.

### library is charged without error but component doesn't appear (footprint)

- always charge libraries using the __little folder icon__! This really helps
- check and re-check that the library is at the right emplacement

### 4 layers PCB

In the PCB layout click on File -> Board setup... -> Copper layers

### get usable footprint from .mod file

- place your .mod file at the same level as the project you want to use it in
- open Manage Footprint Libraries
- import the .mod file using the folder icon
- go to the Footprint editor
- open the footprint (scroll in the libraries on the left)
- click on File -> Export footprint
- save the footprint in the lib_fp folder

### footprints seem not to snap on grid

Beware what part of the component you have selected. I you selected a pad, it will align on the pad, if you selected the middle of the component, it aligns on it.