# UAVCAN

UAVCAN is a communication protocol that allows to send two types of packages (one packet on the bus is called a **frame**):
- message
- respond / request

Characteristics:
- no master
- publish/subscribe and request/response
- lightweight, good for embedded systems (aerospace applications and robotics)
- open-source implementation

## UAVCAN GUI Tools

General information: [https://uavcan.org/GUI_Tool/Overview/](https://uavcan.org/GUI_Tool/Overview/)

Basically, this code allows to have a graphical interface that shows all the packages that are being sent on the CAN bus. It also allows to modify variables -> you can interact directly with your boards.

### Install on Ubuntu

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

### Run UAVCAN GUI Tools
In a terminal (be sure to be in the python environment where zou did the install):

```bash
uavcan_gui_tool
```

A pop-up window appears -> change **CAN bus bit rate** to 100000 and click "ok".

### allow non-default user to access serial port

To use UAVCAN, you have to have access to the serial port of your computer, to obtain this access use:
```bash
sudo adduser opatiny dialout
reboot -h now
```
(replace `opatiny` by your username)

### hardware interface

To be able to scan a UAVCAN network, you have to have all your nodes connected with the UAVCAN cables. The board at one extremity of the chain must be connected to a **Zubax Babel** board, which is connected to a computer using a micro USB cable.

### errors you might get

#### `SLCAN ACK timeout`

Be sure that the bit rate is the same in the code and in the graphical interface. In the code, the bit rate is defined in 


### Get a board to appear as a node in UAVCAN GUI Tools

They are a few things that have to be added to a project generated in CubeMX to have your board appear as a node, use an existing project as the source of your copied files (I used `oibus-mini-adc-dac`):
- copy the `oi_uavcan.c` and `oi_uavcan.h` files to `Src` and include them in the `Makefile`
- copy `libcanard` to `Middlewares/Third_Party` and include to the `Makefile`

## `libcanard`

`libcanard` is the library that implements UAVCAN: it allows you to send, receive and handle packages that are on the CAN bus in the UAVCAN format.

