# KiCAD : things good to know

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

- __no connect :__ blue cross on the right toolbar
- edit the text at the bottom of a sketch: File -> Page Settings

### PCB

__o :__ add component
__x :__ trace
__v :__ via while drawing a trace or change the fronting face
__e :__ access properties of component
__f :__ move component to the other face
__d :__ move tracks according to design rules and nice angles
__b :__ refill zones

__Ctrl + d :__ duplicate / copy

- __copper zone:__ right menu -> Add filled zones -> chose layer
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

### Schematic

### Layout


## Rules to apply for good PCBs

- always rather __protect to much__ than not enough -> for instance power inputs, protect for inverted inputs
- __avoid acute angles__, which make acid traps -> acid remains at these places after board finished and slowly eat the copper traces (not so mush this problem anymore). Yet other problems could occur with high frequencies signals: reflection -> interferences, magnetic fields induced
- use the 3D viewer after making the layout to be sure the labels are well visible

## Creating BOM (bill of materials)

Two distinct BOMs are created. First, a complete BOM is generated based on the KiCAD layout and is added to the folder so that the person assembling the PCB has an exhaustive list of the components he needs. Secondly, a BOM with only the components specific to the board is created in [octopart.com](octopart.com), which allows to directly order all the parts on DigiKey.

### Export BOM from KiCAD

On the PCB layout go to File -> Fabrication Outputs -> BOM File...

Good to know: __MPN__ = manufacturer part number

