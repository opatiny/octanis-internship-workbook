# Starting a MC project from CubeMX

STM32CubeMX is a microcontroller configuration generator for STM32. Practically, it is a graphical interface that allows you to define what your microcontroller pins will be used for, what clock you want it to use and other parameters. Then, you can generate a program skeleton with all this information.

## Procedure

- open STM32CubeMX
- click on "Access to MCU selector"
- chose the right MCU you are using for your project
- in the Pinout and Configuration tab
  - define all the pins you are going to need for your project
  - customize the pins labels
  - add pull-ups, pull-downs or other pins properties
  - set the PF0 and PF1 as the oscillator pins (RCC\_...) by going to the RCC tab
  - go to SYS and set the Debug to Serial Wire (->debugger)
- go to the Project Manager tab and make these changes:
  - set Project -> Application structure to Advanced
  - set Project -> Toolchain IDE to MakeFile
- Code generator: check the first box of Generated files (-> creating files for every function)
- click on Generate code

## The generated code

if flashing doesn't work, change the file extension from .hex to .elf
