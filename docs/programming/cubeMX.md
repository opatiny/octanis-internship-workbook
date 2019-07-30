# Starting a MC project from CubeMX

[Home](../../README.md) | [Programming environment setup procedure](./environmentSetup.md) | [C tips in VS Code](./c.md) | [Useful definitions](./vocabulary.md)

STM32CubeMX is a microcontroller configuration generator for STM32. Practically, it is a graphical interface that allows you to define what your microcontroller pins will be used for, what clock you want it to use and other parameters. Then, you can generate a program skeleton with all this information.

## Procedure

- open STM32CubeMX
- click on **"Access to MCU selector"**
- chose the right MCU you are using for your project
- in the **Pinout and Configuration**n tab
  - define all the pins you are going to need for your project
  - customize the pins labels
  - add pull-ups, pull-downs or other pins properties
  - set the PF0 and PF1 as the oscillator pins (RCC\_...) by going to the RCC tab
  - go to SYS and set the Debug to Serial Wire (->debugger)
- go to the **Clock Configuration** tab and select the clock that you want to use (e.g.: HSI = high speed internal, LSE = low speed external)
- go to the **Project Manager** tab and make these changes:
  - set Project -> Application structure to Advanced
  - set Project -> Toolchain IDE to MakeFile
  - Code generator -> check the first box of Generated files (-> creating files for every function)
- click on **Generate code**

## The generated code

- the file in which you will write you code is the `main.c` file, which is in `Core/Src/`
- every time you implement a functionality, add the `.c` file to `Core/Src/` and the `.h` file to `Core/Inc/`
- **note :** the include paths in main are not really relative, because it they are actually defined in the `MakeFile`
- **beware :** if you have to re-generate the code from CubeMX, make sure that all your code is between these comments, otherwise, it might get erased.

```c
/* USER CODE BEGIN blabla */

/* USER CODE END blabla */
```

If you have FreeRTOS on your device, insert your code in the `freertos.c` file.

### make command

In the bash, just type `make` + Enter.

When running the `make` command, two compiled files are generated, one `.elf` and one `.hex` file. It is possible that one of the two doesn't compile properly. The files are in the `build` folder. The command will not recompile everything every time it is run, it only updates the files with changes.

### make flash command

In the bash, just type `make flash` + Enter.

An error is generated if no **external debugger** (stlink-vx) is connected.

To allow the flash, copy these lines at the end of the `MakeFile` (better before the EOF...):

```c
#######################################
# flash the chip
#######################################
flash:
	openocd -d0 -f stm32f3.cfg -c "init;reset halt;stm32f3x mass_erase 0;flash write_image build/$(TARGET).elf;reset run;shutdown"
```

-> `openocd` is the code debugger

Then, copy the `stm32f3.cfg` file from another project and paste it at the level of the `MakeFile`.

Also, if flashing doesn't work, change the file extension from `.hex` to `.elf` in the flashing command that you copy pasted in the `MakeFile` (it might happen that one of the two executable files is not generated compiled properly).

## various issues

### this error message: makefile:108: \*\*\* missing separator. Stop.

The MakeFile is the only one that CubeMX isn't really good at updating. So it is possible that they are two times the same commands in it. In that case, you will get this error. To fix it, go to the file and delete all extra commands.

## things that can be configured in CubeMX

### interrupts

- To setup an interrupt on a pin, click on the pin and choose the `GPIO_EXTIx` type.
- Click on the pin in the GPIO tab and set the **GPIO mode** : what is going to trigger the interrupt?
- Go to the `NVIC` tab, find your interrupt in the list and be sure that "Enabled" and "Uses FreeRTOS functions" Boxes are checked
- Generate the code.

