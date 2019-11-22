# Setting up a good programming environment for STM32 on Linuy

[Home](../../README.md) | [Useful definitions](../general/theory.md) | [FreeRTOS](./freertos.md) | [CubeMX procedure](./cubeMX.md) | [C tips](../C/c.md)

## Tutorial
First of all, follow this tutorial: [https://docs.octanis.ch/display/PUB/VSCode+STM32+Firmware+development](https://docs.octanis.ch/display/PUB/VSCode+STM32+Firmware+development)

## Install docker

[https://docs.docker.com/install/linux/docker-ce/ubuntu/](https://docs.docker.com/install/linux/docker-ce/ubuntu/)

You have to install the repository in which there is the last version of docker -> it is not something you can make with apt-get because it the repositories of apt-get are not necessarily upt-to-date with the last version of Docker

## In VSCode

Install these extensions:
- Remote Development -> Microsoft
- Docker -> Microsoft
- Restart vscode

## To do every time

In the firmware of your project:

- Create a `.devcontainer` folder at first level and copy `devcontainer.json` and `Dockerfile` to  it (there's acopy of these files in `./envFiles/`)
- Copy `launch.json` and `c_cpp_properties.json` to your `.vscode` folder
- Click on the green icon at the bottom-left of the vscode window and pick "Reopen Folder in container"
- Copy the `STM32F303.svd` file to the root of the project

Also, if **CTRL + Click** to jump to function definition doesn't work after all the files were copied, verify the following:
- all the include paths in `c_cpp_properties.json` are correct
- you have the **C/C++ extension** installed in the dev container!
