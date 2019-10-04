# FreeRTOS

[Home](../../README.md) | [Useful definitions used in IT](../general/theory.md) | [CubeMX](./cubeMX.md) | [Programming environment setup procedure](./environmentSetup.md) | [C tips](../C/c.md)

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

## Queues

- allow tasks to communicate -> variables can be send from task to task
- a queue is a set of empty spaces that can be filled with "**messages**" of different types (-> the type allows to read the data)
- the queue is **FIFO**
- many tasks can write or read to a queue
- in freertos, you can either directly put the **data** in a message, or you can put a **pointer** if the data is too big
- Blocking :
  - a task that reads from an empty queue is put in Blocked state for a certain block time (or till new messages arrive)
  - a task that tries to write to a full queue is put in Blocked state for a certain block time (or till there's space in the queue)

## Binary semaphore

- something like a one box queue -> it is either full or empty (binary)
- for example, you can sync a task with an interrupt:
  - the interrupt fills the semaphore every X time
  - the task is blocked while the semaphore is empty
  - the task unblocks when the semaphore is full and it empties the semaphore again
- many tasks can wait for the same semaphore -> you have a priority order
- good to implement synchronisation

## Counting semaphore

- can be seen as a queue of length greater than one (but what is in the messages doesn't matter)
- two typical applications:
  - **count events** : semaphore incremented every time an event occurs and decremented every time a task processes an event (should be initialized with value 0)
  - **manage resources** : the semaphore indicates the number of available resources, it is decremented when a task uses a resource and incremented when the task is finished with it (should be initialized at the initial number of resources)

## Mutexes

- binary semaphore with **priority inheritance mechanism**
- good to implement MUTual EXclusion of tasks
- like a token that can only be used by one task at a time -> you are sure that the tasks cannot run "simultaneously"
- **priority inheritance mechanism** : if a low priority task uses a token that blocks a higher priority task, the task using the token is temporarily raised to the same priority level as the higher priority one
- mutexes **should not be used with interrupts**!
- recursive mutexes must be given back five times by a task that has taken it five times before it can be used by another task
