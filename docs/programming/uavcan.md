# UAVCAN GUI Tool

General information: [https://uavcan.org/GUI_Tool/Overview/](https://uavcan.org/GUI_Tool/Overview/)

Basically, this code allows to "sniff" the network and see all the packages that are being sent. It also allows to modify variables -> you can interact directly with your boards.

## Install on Ubuntu

Open a Terminal and install `pip3`:
```bash
conda install -c conda-forge pip
```

Install uavcan:
```bash
pip install git+https://github.com/UAVCAN/gui_tool@master
```
Test the install:
```bash
uavcan_gui_tool 
```


## Run UAVCAN GUI Tool
In a terminal:

```bash
uavcan_gui_tool
```

## allow non-default user to access serial port

To use UAVCAN, you have to have access to the serial port of your computer, to obtain this access use:
```bash
sudo adduser opatiny dialout
reboot -h now
```
(replace `opatiny` by your username)
