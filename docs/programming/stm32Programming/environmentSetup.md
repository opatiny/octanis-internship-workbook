# Setting up a programming environment for STM32

[Home](../../README.md) | [Useful definitions](../general/theory.md) | [FreeRTOS](./freertos.md) | [CubeMX procedure](./cubeMX.md) | [C tips in VS Code](./c.md)

## Windows

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

## Linux

**Disclaimer:** Doc is probably not complete

I partly followed this tutorial: [https://www.instructables.com/id/Build-a-Program-for-STM32-MCU-Under-Linux/](https://www.instructables.com/id/Build-a-Program-for-STM32-MCU-Under-Linux/)

### CubeMX
- you can have troubles installing CubeMX, in my case it was because I didn't had java. To install it, simply run
  ```bash
  sudo apt install default-jdk
  ```
- then, go to the folder where you extracted the CubeMX files and type `ls -l` to check file execution rights
- if necessary, change the rights of the .linux file using `chmod 777 file.linux`
- run the .linux file with `./file.linux`
- follow the wizard

### Packages needed to have the `make` and `make flash` commands

A useful command in general which allows you to see if a package exists using keywords (replace `stlink` by your keyword):
```bash
sudo apt-cache search stlink
```

Also, it can happen that the packages that you install using `apt-get install` on Ubuntu are outdated. I that happens to you, start by deleting the outdated package using `sudo appt remove`. Then, you have to download the package and add the binaries manually to the PATH, which is defined in the `.bashrc` file (in your home directory). After adding manually to this file, you have to reboot!


#### arm-none-eabi

Using `apt-get install` installed an outdated version. You can check this with:
```bash
arm-none-eabi-gcc --version
```

If outdated, remove the package:
```bash
sudo apt remove gcc-arm-none-eabi
```

Download latest stable version of package:
[developer.arm.com](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads)

Go to your Download folder and extract the files:
```bash
tar xvf gcc-arm-none-eabi-8-2019-q3-update-linux.tar.bz2 
```
(don't just copy this, be sure to extract the right compressed folder)

Move the toolchain to somewhere you like (I put it in the home directory).
Add the executable to your `.bashrc` file (in your home directory).
```bash
#ARM toolchain
export PATH="/home/opatiny/arm-toolchain/bin:$PATH"
```
Then open a new terminal for the changes to take effect.

Check that the package version is now correct:
```bash
arm-none-eabi-gcc --version
```


#### openocd

```bash
sudo apt-cache search openocd
sudo apt install openocd
openocd
```

#### stlink

Clone the GitHub repository:
```bash
git clone https://github.com/texane/stlink.git
```
Install necessary package:
```bash
sudo apt install p7zip mingw-w64
```
Then: 

```bash
make release
cd build/Release; sudo make install
exit
```

ldconfig??


### UAVCAN

Install UAVCAN to see packages on the network, procedure is [here](./uavcan.md).


## The physical debugger

Tag connect are used on all our boards, however, the STLINK usb key is supposed to be wired to boards with jump wires. Therefore, the connector on the bought tag connect must be cut off to be soldered to the stlink.

This is the pinout of the tag connect when looked at the pins. The colors of the corresponding cables are indicated.
