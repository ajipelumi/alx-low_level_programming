**Dynamic Memory Allocation** can be defined as a procedure in which the size of a data structure (like Array) is changed during the runtime.
C provides some functions to achieve these tasks. 

There are 4 library functions provided by C defined under <stdlib.h> header file to facilitate dynamic memory allocation in C programming. One of them is **malloc**

The *malloc* or *memory allocation* method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. If space is insufficient, allocation fails and returns a NULL pointer.

This README describes what each program is doing;

The file main.h is a local header file that contains function definitions.

The file _putchar.c is a function that allows the usage of _putchar to print.

The file 0-create_array.c is a function that creates an array of chars, and initializes it with a specific char.

The file 1-strdup.c is a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

The file 2-str_concat.c is a function that concatenates two strings.

The file 3-alloc_grid.c is a function that returns a pointer to a 2 dimensional array of integers.

The file 4-free_grid.c is a function that frees a 2 dimensional grid previously created by your alloc_grid function.

The file 100-argstostr.c is a function that concatenates all the arguments of your program.
