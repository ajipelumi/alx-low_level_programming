#### Following are some interesting facts about function pointers.

1. Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code.

2. Unlike normal pointers, we do not allocate de-allocate memory using function pointers.

3. A functions name can also be used to get functions address.

4. Like normal pointers, we can have an array of function pointers. Below example in point 5 shows syntax for array of pointers.

5. Function pointer can be used in place of switch case.

6. Like normal data pointers, a function pointer can be passed as an argument and can also be returned from a function.

This README describes what each program is doing;

The file function_pointers.h is a local header file that contains function definitions.

The file _putchar.c is a function that allows the usage of _putchar to print.

The file 0-print_name.c is a function that prints a name.

The file 1-array_iterator.c is a function that executes a function given as a parameter on each element of an array.

The file 2-int_index.c is a function that searches for an integer.

The file 3-main.c contains your main function only.

The file 3-op_functions.c contains five operational functions from addition to subtraction to multiplication to division to modulus.

The file 3-get_op_func.c contains the function that selects the correct function to perform the operation asked by the user.

The file 3-calc.h contains all the function prototypes and data structures used by the program.
