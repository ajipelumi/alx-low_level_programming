Dynamic Memory Allocation can be defined as a procedure in which the size of a data structure (like Array) is changed during the runtime. C provides some functions to achieve these tasks.

There are 4 library functions provided by C defined under <stdlib.h> header file to facilitate dynamic memory allocation in C programming. *malloc* was treated in the previous project. We will look at *calloc*, *realloc* and *free*.

*calloc* or *contiguous allocation* method in C is used to dynamically allocate the specified number of blocks of memory of the specified type. it is very much similar to malloc() but has two different points and these are:
1. It initializes each block with a default value ‘0’.
2. It has two parameters or arguments as compare to malloc().

*realloc* or *re-allocation* method in C is used to dynamically change the memory allocation of a previously allocated memory. In other words, if the memory previously allocated with the help of malloc or calloc is insufficient, realloc can be used to dynamically re-allocate memory. re-allocation of memory maintains the already present value and new blocks will be initialized with the default garbage value.

*free* method in C is used to dynamically de-allocate the memory. The memory allocated using functions malloc() and calloc() is not de-allocated on their own. Hence the free() method is used, whenever the dynamic memory allocation takes place. It helps to reduce wastage of memory by freeing it.

This README describes what each program is doing;

The file main.h is a local header file that contains function definitions.

The file _putchar.c is a function that allows the usage of _putchar to print.

The file 0-malloc_checked.c is a function that allocates memory using malloc.

The file 1-string_nconcat.c is a function that concatenates two strings.

The file 2-calloc.c is a function that allocates memory for an array, using malloc.

The file 3-array_range.c is a function that creates an array of integers.

The file 100-realloc.c is a function that reallocates a memory block using malloc and free
