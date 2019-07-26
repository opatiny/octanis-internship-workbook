# Programming in C in VS Code

## Theory

- FreeRTOS: [https://www.freertos.org/taskandcr.html](https://www.freertos.org/taskandcr.html), TO READ:
  - About FreeRTOS
  - Tasks and Co-routines
  - More about tasks
  - Queues, mutexes, semaphores...


## Various functions and useful code bits

### malloc()

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

## Various tips

- **CTRL + click**: to check if a function exists
