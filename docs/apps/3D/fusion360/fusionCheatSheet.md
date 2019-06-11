# Tips and tricks to Fusion 360

## In model mode
### Mouse actions

Left click: select surface
Shift + left click: select edge

Rotate wheel: pan
Shift + rotate wheel: orbit

Right click: enters basic action menu

Double-click on element of history to edit it

### Shortcuts

m : move
l : line
r: rectangle (corner-corner)
c : center-diameter circle
j: joint in assembly mode


### Various issues

- __insert text__ is in sketch, you can chose the font and then extrude
- [https://knowledge.autodesk.com/support/fusion-360/troubleshooting/caas/sfdcarticles/sfdcarticles/How-to-display-a-cross-section-of-a-Fusion-360-model.html](https://knowledge.autodesk.com/support/fusion-360/troubleshooting/caas/sfdcarticles/sfdcarticles/How-to-display-a-cross-section-of-a-Fusion-360-model.html) : how to __show cross-section__ of a part

- [https://help.autodesk.com/view/fusion360/ENU/?guid=GUID-76272551-3275-46C4-AE4D-10D58B408C20](https://help.autodesk.com/view/fusion360/ENU/?guid=GUID-76272551-3275-46C4-AE4D-10D58B408C20) : list of __math functions__ that can be used when defining parameters
- if a __fillet on an edge__ goes the wrong way, check if they aren't two distinct bodies!!

## Assemblies

- [https://www.autodesk.com/autodesk-university/class/Assemblies-Putting-It-Together-Fusion-360-2017#video](https://www.autodesk.com/autodesk-university/class/Assemblies-Putting-It-Together-Fusion-360-2017#video) : general video about assemblies
- [https://grabcad.com/tutorials/autodesk-fusion-360-tutorial-how-to-insert-and-assembly-some-new-components-from-the-other-files](https://grabcad.com/tutorials/autodesk-fusion-360-tutorial-how-to-insert-and-assembly-some-new-components-from-the-other-files) : how to import many parts in one file and assemble them

- to create "folders" in an assembly, create a new component that contains many other components

- Ctrl + mouseover: to lock the entity type when placing origins on joints. This means that if you are on an edge, the proposition the soft makes are only going to be on that edge, same for faces.
- Right-click on a body -> Ground: to define a "base" body
- Update a component: right-click on body -> Get Latest
- j : for joint

### Insert McMaster-Carr parts designs in assemblies

- go to Insert -> Insert McMaster-Carr Component
- make selections in the webpage until you find the component you need
- click on the component ID (in the specs table)
- click on Product Details
- swipe down until you're in the CAD section
- chose the extension you want (STEP)
- click save

## Realize technical drawings

- click File -> New Drawing from Design
- add view using Base view and Projected view
- add dimensions using the Dimension tool
- you can __modify a dimension text__ by double-clicking on it (to add tolenrance, or special symbol like diameter)
