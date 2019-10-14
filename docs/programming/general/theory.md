# Some theory and definitions useful in C programming

[Home](../../../README.md) | [Programming environment setup procedure](../stm32Programming/environmentSetup.md) | [C tips in VS Code](../stm32Programming/c.md) | [CubeMX procedure](../stm32Programming/cubeMX.md)

## Concepts



### FSM

### Stack and Heap


## Vocabulary

- **bare metal :** when writing code directly on a microcontroller, without and OS
- **Flash :** non-volatile memory
- **kernel :** main part of the *OS*, acts as an interface between the applications and the hardware
- **microcontroller :** processor + bunch of internal peripherals
- **module :** it C code, a module is the combination of a `.c` (functions implementations) and a `.h` (functions declarations, what is visible from other files) file
- **preemption :** "In computing, preemption is the act of temporarily interrupting a task being carried out by a computer system, without requiring its cooperation, and with the intention of resuming the task at a later time. Such changes of the executed task are known as context switches" - WiKi
- **scheduler :** part of the *kernel* responsible for managing the time between all the tasks


## Acronyms

- **ACK :** ACKnowledgment
- **EEPROM :** Electrically Erasable Programmable Read-Only Memory
- **HAL :** Hardware Abstraction Layer -> functions that are linked to the internal peripherals of the microcontroller
- **FSM :** Final State Machine
- **NVIC :** Nested Vector Interrupt Control
- **OS :** Operating System
- **RAM :** Random Access Memory, volatile
- **ROM :** Read Only Memory
- **RCC :** Reset and Clock Controller
