# FreeRTOS

FreeRTOS documentation: [https://www.freertos.org/taskandcr.html](https://www.freertos.org/taskandcr.html)

## Tasks

A task is a sequential piece of code that aims to realize something. Having an OS allows you to have many tasks that appear to run simultaneously (it's multitasking). The task itself has no idea when it is suspended or resumed, that is the job of the OS. Every task is using the registers and the memory in it's own way, this is called the **context** of the task. To store the context, each task is provided with its own **stack**. When the kernel swaps from one task to another, it stores the context of the task somewhere, and then it restores it just before the task is switched in again. This is called **context switching**.

A task can be in four different states:
- **Running :** Currently using processor time (1 task at a time)
- **Ready :** Ready to take over processor time whenever kernel gives it to it
- **Blocked :** Task waiting for something to occur (interrupt, sensor value, ...)
- **Suspended :** Task explicitly put in this state, passive

## RTOS

The difference between normal OS and **RTOS** is that the time will not be shared "equally between tasks (-> the scheduling is different). Indeed, the processor has to meet deadlines issued by real-life events that can occur at any moment. So, each task has to be issued with a **priority**. Then, the kernel has to ensure that the highest priority task that is ready to run is using the processor resources. Low number is low priority.  Many tasks can have the same priority level, they then share the processor time.

## The idle task

The kernel automatically creates an **idle task**, of priority 0: it is executed whenever there's nothing else to do. The idle task manages the memory by freeing the memory allocated by the RTOS to tasks that were deleted. Other tasks can share the same priority level.

In case you want something specific to be run when idle task is running, you can implement an **idle task hook** (basically a function that does that). To create such a function, set `USE_IDLE_HOOK` to 1 in FreeRTOSConfig.h and define a function with this prototype:

```C
void vApplicationIdleHook( void );
```

This function is often used to put the microcontroller in a sleep / low poser mode.

## Co-routines
- fundamentally similar to tasks
- all co-routines chare the same stack -> reduces the amount of RAM
- the variables can be shared between/ accessed by various co-routines
- not used often nowadays