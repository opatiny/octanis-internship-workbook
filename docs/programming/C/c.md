# Programming in C

[Home](../../README.md) | [Useful definitions used in IT](../general/theory.md) | [Programming environment setup procedure](../stm32programming/environmentSetup.md) | [FreeRTOS](../stm32programming/freertos.md)

Learning to use C programming language: [https://github.com/opatiny/C-testing](https://github.com/opatiny/C-testing)

## Theory

For complete theory, refer to the [EPFL course on C programming](https://ikea.octanis.ch/index.php/apps/files/?dir=/Octanis%20Instruments/Engineering/Courses/R%20Boulic%20EPFL%20C%20Programming&fileid=89737)

### FreeRTOS

- FreeRTOS: [https://www.freertos.org/taskandcr.html](https://www.freertos.org/taskandcr.html), TO READ:
  - About FreeRTOS
  - Tasks and Co-routines
  - More about tasks
  - Queues, mutexes, semaphores...

### Code structure

In C code, they are at least three types of files that are required:
- `.c` : files in which all the functions are written
- `.h` : files that contain all the includes of standard libraries and from other files. They must list all the prototypes of the user-accessible functions. There must be one `.h` file per `.c` file. They can be circular includes
- `.out` or `.o` : output files. The compiled code.

Additionally, a Makefile should be used, which contains all the includes of the module and the type of compiler that you want to use. The Makefile is executed using the `make` command. It should be on the first level of the module. The first time that the `make` command is run, all the files are compiles. Afterwards, only the modified files are (optimized).

All the `.c` files should be contained in a `Src` folder. All the `.h` files should be contained in a `Inc` folder. The main file of a module must be called `xxx-main.c`, where `xxx` is an identifier that should be put at the beginning of all the files of a module.

### Module

Module = Interface + Implementation

- **Interface:** What the user has access to -> `.h` file
- **Implementation:** The source code with all the functions necessary for it to work -> `.c`

One interface can have many possible implementations.

### Makefile

Theory from EPFL course: [Serie 15 - Chapitre 6](https://ikea.octanis.ch/index.php/apps/files/?dir=/Octanis%20Instruments/Engineering/Courses/R%20Boulic%20EPFL%20C%20Programming&fileid=89737#pdfviewer)

In general, the Makefile is a file that is going to handle all the includes of the headers and c files. Also, it smartly recompiles the code. -> Only recompiles what has changed.

Full documentation about `make` and `Makefiles`: [https://www.gnu.org/software/make/manual/make.html#Running](https://www.gnu.org/software/make/manual/make.html#Running).

### c_cpp_properties.json (in .vscode)

This file contains the paths to all the files that are included in the Makefile. It is the one that allows the auto-completion (intellisense). Restart vscode every time you modify this file.

### Linked lists

Very good page: [https://www.learn-c.org/en/Linked_lists](https://www.learn-c.org/en/Linked_lists)

- Basically an array of items.
- items can be removed from anywhere in the list
- you don't have to define an initial size
- larger overhead then arrays
- no "random" access -> have to iterate over all the items before you get to the one you want

Each node of the linked list contains a **value** and a **pointer to the next node**. -> chain of nodes

## Various functions and useful code bits

### empty loop

In C, an empty loop acts as a `while(True)`.

```C
for(;;) {
  // code
}
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

### malloc()

Allocate some memory.

[https://www.tutorialspoint.com/c_standard_library/c_function_malloc](https://www.tutorialspoint.com/c_standard_library/c_function_malloc)

### macros

A macro is basically when you define an alias name for some code. The alias is then replaced by the corresponding code (at every occurrence) ba the precompiler. They are defined as follows:

```c
#define MY_MACRO  1
```

### printf()

This function allows to print variables or text. The careful, the buffer for printf() is only emptied when there is a \n. Also, you have to specify the type of the variable that you want to print.

```C
printf("%d\n", length);
```

A few codes:
- d : decimal integer
- f : float
- s : string
- c : character
- p : pointer address


### `static`

The `static` keyword put in front of a variable declaration will make that the variable value is kept when calling the function many times. So, you can remember the value of a variable as it was the last time you called it. It acts as a memory for variables.

Be careful, though, when you use it, because it is quite tricky.

```C
static uint32_t time;
```
### recursive struct definition

In C, it is possible to define a struct recursively, like this:

```C
typedef struct node {
    int val;
    struct node * next;
} node_t;
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
### the `->` syntax

The `->` syntax is used to act on a property of an instance of a `struct`. (like calling a property on an object in javascript)

### time since boot in ms

```C
uint32_t time = HAL_GetTick();
```

## Various tips

- **CTRL + click**: to check if a function exists
- **interrupts** are setup in CubeMX
- Good tutorials: [https://zestedesavoir.com/tutoriels/755/le-langage-c-1/](https://zestedesavoir.com/tutoriels/755/le-langage-c-1/)

### compile and execute a C code in vscode

Be sure to have a C extension installed (gcc compiler).

```bash
gcc -o file.out file.c
./file.out
```
If using the math library, you have to add the -lm function at the end of the command. Indeed, math is not really a standard library. Example:

```bash
gcc -o  drawPrime.out drawPrime.c -lm
```

### Get an easy programming environment for C: Jupyter

We already use Jupyter to program in python, there is a package that allows to get a C notebook. To install it, run the following in a terminal:

```bash
pip install jupyter-c-kernel
sudo /home/opatiny/anaconda3/bin/install_c_kernel
jupyter notebook
```
To open the C notebook, click on New -> Notebook -> C.
