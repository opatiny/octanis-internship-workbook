# Setting up a programming environment for STM32

[Home](../../README.md) | [CubeMX procedure](./cubeMX.md)

Setup environment to program STM32 on Windows: [https://wiki.octanis.org/stm32/vscode](https://wiki.octanis.org/stm32/vscode)

To help with the registers definition, use the **STM32CubeMX** software.

They are a few things you need to install in order to be able to program an STM32 from your Windows on VS Code. Here is what you have to do:

- install [VS code](https://code.visualstudio.com/)
- install [STM32CubeMX](https://www.st.com/en/development-tools/stm32cubemx.html)
- create a VSARm folder in c:\
- download the [GNU Embedded Toolchain for ARM](https://developer.arm.com/open-source/gnu-toolchain/gnu-rm/downloads\) and move the executables to C:\VSARM\armcc\
- download [MinGW-W64](https://sourceforge.net/projects/mingw-w64/) and move the executables to C:\VSARM\mingw\ (-> this basically allows you to have some commands that you normally have on unix)
- download [openocd](http://openocd.org/getting-openocd/) and move the executables to C:\VSARM\openocd\ (take care with the github project, so that you download the files already compiled -> bin subfolder). This is the software debugger.
- check the presence of bin subfolders in the three folders created above
- open the environment variables (click on windows key)
- -> in the system variables tab
  - click New... and create a VSARM variable with C:\VSARM as a path
  - click on the Path system variable -> Edit...
  - add a field C:\VSARM\armcc\bin
  - add a field C:\VSARM\mingw\mingw32\bin
  - add a field C:\VSARM\openocd\bin
  - click Ok
- to be able to compile and flash, you absolutely need two commands: **make** and **make flash**, to get them, go on on [this page](https://sourceforge.net/projects/mingw-w64/files/External%20binary%20packages%20%28Win64%20hosted%29/make/) and download the files. Unzip. Place them in C:\VSARM\mingw\mingw32\bin. The commands should now be available from Command Prompt (name of the mingw app, kind of terminal)

From there, you should be globally done with the environment. To start a new firmware project, follow the [CubeMX procedure](./cubeMX.md).
