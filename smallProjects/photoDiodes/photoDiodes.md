# Read values of photo-diodes board

[Home](../../README.md)

**Goal:** Getting started with programming of the STM32. Generate a 10MH frequency for the photo-diodes board. Power that board and manage to retrieve data from the chip.

## Project related notions

### silicon die

### quantum efficiency

## DDC112 used pins

- **IN1**, **IN2** : inputs coming from the photodiodes
- **DOUT** : data out on 20 bits, only valid when DVALID is low
- **DVALID** (pulled up) : is low when data going out of DOUT is valid
- **CLK** : input closk at 10MHz
- **DCLK** : clock necessary for the output on DOUT, this clock defines how fast the data will come out, it can be defined by the user with a max of 12MHz

## The STM32 board

The board that we are going to use is a NUCLEO-F303RE STM32.

It is possible to make LD2 blink from the software, it is on pin PA5.

Pins attribution in cubeMX:

- **DOUT** : PA12
- **DVALID** PA11
- **CLK** : PB11
- **DCLK** : PB12

### led blink code (toggle every second)

```c
  while (1) {
    HAL_Delay(1000);
    HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
  }
```

## How to generate a 10MHz frequency?

Set up a PMW on a timer.

Good tutorial: [http://www.emcu.eu/stm32-basic-timer/](http://www.emcu.eu/stm32-basic-timer/)

[https://electronics.stackexchange.com/questions/280473/stm32-clock-signal-generator-using-a-timer-stm32cubemx-generated-code](https://electronics.stackexchange.com/questions/280473/stm32-clock-signal-generator-using-a-timer-stm32cubemx-generated-code)

However, these methods did not allow to get the 10MHz desired frequency. The external clock of the development board being at 8MHz, it appears that the maximal output frequency cannot be higher that 4MHz, as shown in the oscilloscope screenshot underneath.

<img src="./maxFreqDevBoard.png" alt="case assembly" width="80%" class="center">

## Datasheets

ADC chip datasheet (used for direct photosensor digitalization): [DDC112](./ddc112.pdf)

Photodiode datasheet: [BPW21R](bpw21r.pdf)

STM32F303RE datasheet (microcontroller): [nucleo-stm32f303re-UM.pdf](./nucleo-stm32f303re-UM.pdf)

## Links

The chip converting photo-diodes output to value on 20 bits : [https://www.ti.com/product/DDC112](https://www.ti.com/product/DDC112)

To see (check if solar panels are broken) : [https://www.youtube.com/watch?v=TGUteH93xNo](https://www.youtube.com/watch?v=TGUteH93xNo)
