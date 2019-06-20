# KiCAD : things good to know

## Tutorials and linkd
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

- edit the text at the bottom of a sketch: File -> Page Settings

### PCB
__o :__ add component
__x :__ trace
__v :__ via while drawing a trace or change the fronting face
__e :__ access properties of component
__f :__ move component to the other face
__d :__ duplicate / copy

- __copper zone:__ right menu -> Add filled zones -> chose layer
- edit __zone priority level__: press "e" while on zone and modify "Zone priority level", the bigger the number, the higher the priority
- __update copper zone__: right-click on zone -> Zones... -> Fill

## Rules to apply for good PCBs

- always rather __protect to much__ than not enough -> for instance power inputs, protect for inverted inputs
- __avoid acute angles__, which make acid traps -> acid remains at these places after board finished and slowly eat the copper traces 