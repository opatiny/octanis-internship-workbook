# UAVCAN

[Home](../../README.md) | [UAVCAN datasheet](./UAVCAN_Specifications_v.1.0.pdf)

## Theory

UAVCAN is a communication protocol that allows to send two types of packages (one packet on the bus is called a **frame**):
- **message :** broadcast packet on with 8 data bytes
- **respond / request :** packet to a specific node with 7 bytes of data, however, the **transfer** (data that can be on many packets) can be on an undefined number of packets

Characteristics:
- no master
- publish/subscribe and request/response
- lightweight, good for embedded systems (aerospace applications and robotics)
- open-source implementation

### Communication system abstraction layers stack (OSI model)

This stack is composed of four layers that are important for us:
- **Application :** what we are developing
- **Transport :** How the data is formatted. In our case: **UAVCAN -> `libcanard`**.
- **Network :** Describes how the communication is going to be working, using the physical layer available. In our case : **CAN**.
- **Physical layer :** What are the physical entities implied in the communication. In our case: the **CAN Tranceiver** and the **CAN Controller**.

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
- copy the `libcanard` folder to `Middlewares/Third_Party` and include to the `Makefile`
- in the `freertos.c` file, update the user includes:  
  ```C
  /* USER CODE BEGIN Includes */     
  #include "../Inc/oi_uavcan.h"
  #include "../Inc/oi_driver.h"
  /* USER CODE END Includes */
  ```
- then, add the uavcan start function at the end of `freertos.c`
  ```C
  /* USER CODE BEGIN Application */

  void StartUAVCANTask(void const *argument)
  {
    //initialization of can and uavcan
    oi_uavcan_init();
    uint8_t togglecount = 0;
    while (1)  {
      
      oi_uavcan_sendCanard();
      oi_uavcan_receiveCanard();
      oi_uavcan_spinCanard(osKernelSysTick());
  
      if(togglecount > 10)
      {
        HAL_GPIO_TogglePin(LED_CAN_GPIO_Port, LED_CAN_Pin);
        togglecount = 0;
      }
      else
      {
        togglecount += 1;
      }

      osDelay(10);
    }
  }
  /* USER CODE END Application */
  ```
- start the task in `freertos.c`:
  ```C
  /* USER CODE BEGIN RTOS_THREADS */
  osThreadDef(UAVCANTask, StartUAVCANTask, osPriorityHigh, 1, 256);
  osThreadCreate(osThread(UAVCANTask),NULL);
  /* USER CODE END RTOS_THREADS */
  ``` 
- verify that the bit rate is set to 100000 in `oi_uavcan.h` (parameter name: `CANSPEED`)
- I think it should work now... -> try running uavcan gui tools

Refer to commit `5641e88abcd2c87e58713f57fc442a8fd6cfc765` of the distance module project to see a basic example of uavcan working.

## `libcanard`

`libcanard` is the library that implements UAVCAN: it allows you to send, receive and handle packages that are on the CAN bus in the UAVCAN format. We use many functions of this library to manage the UAVCAN packages.

## very rudimentary `println`

There is one "easy" way to get a value from the microcontroller in UAVCAN GUI Tools: you can use the `oi_uavcan_publish_keyVal(char * key[3], float val)` function, that allows you to send a **broadcast message with a 3 characters string and a float**.

To inspect that value in the GUI Tool, click on **Tools -> Bus Monitor**. Then, press play: you will see all the packages on the bus. The packages that contain the string and float are called `debug.keyvalue`. Click on one of the messages: you can see the string and value.
