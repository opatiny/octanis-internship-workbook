# Programming in C in VS Code

[Home](../../README.md) | [Useful definitions used in IT](../general/theory.md) | [Programming environment setup procedure](./environmentSetup.md) | [C tips in VS Code](./c.md) | [FreeRTOS](./freertos.md)

## Theory

- FreeRTOS: [https://www.freertos.org/taskandcr.html](https://www.freertos.org/taskandcr.html), TO READ:
  - About FreeRTOS
  - Tasks and Co-routines
  - More about tasks
  - Queues, mutexes, semaphores...


## Various functions and useful code bits

### malloc()

Allocate some memory.

[https://www.tutorialspoint.com/c_standard_library/c_function_malloc](https://www.tutorialspoint.com/c_standard_library/c_function_malloc)

### empty loop

In C, an empty loop acts as a `while(True)`.

```C
for(;;) {
  // code
}
```

### task function skeleton

This should be the base for all task functions:
```C
    void vATaskFunction( void *pvParameters )
    {
        for( ;; )
        {
            -- Task application code here. --
        }

        /* Tasks must not attempt to return from their implementing
        function or otherwise exit.  In newer FreeRTOS port
        attempting to do so will result in an configASSERT() being
        called if it is defined.  If it is necessary for a task to
        exit then have the task call vTaskDelete( NULL ) to ensure
        its exit is clean. */
        vTaskDelete( NULL );
    }
```

### `static`

The `static` keyword put in front of a variable declaration will make that the variable value is kept when calling the function many times. So, you can remember the value of a variable as it was the last time you called it. It acts as a memory for variables.

Be careful, though, when you use it, because it is quite tricky.

```C
static uint32_t time;
```

### time since boot in ms

```C
uint32_t time = HAL_GetTick();
```

### interrupt

First, the interrupt pin must be setup in CubeMX (-> refer to the [CubeMX documentation](./cubeMX.md)).

In the code, there is one function that is called whenever an interrupt occurs: `HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)`. Then, you have to specify what must be executed by the function for each interrupt by checking what pin fired it (i this example, the interrupt is on the pin of a bumper):

```C
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
 if(GPIO_Pin == BUMP_Pin)
  {
      // code to execute, keep it short and fast!!
  }
}
```
This function must be defined in user code. Be careful not to compute complex things inside the interrupt, because it blocks all the other tasks! Try just changing the state of some variables that you will then access from tasks.


## Various tips

- **CTRL + click**: to check if a function exists
- **interrupts** are setup in CubeMX
