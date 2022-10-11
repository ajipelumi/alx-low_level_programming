When a C program is compiled, the compiler generates object code. After generating the object code, the compiler also invokes linker. One of the main tasks for linker is to make code of library functions (eg printf(), scanf(), sqrt(), ..etc) available to our program. A linker can accomplish this task in two ways, by copying the code of library function to our object code, or by making some arrangements so that the complete code of library functions is not copied, but made available at run-time.

**Static Linking and Static Libraries** is the result of the linker making copy of all used library functions to the executable file. Static Linking creates larger binary files, and need more space on disk and main memory. Examples of static libraries (libraries which are statically linked) are, .a files in Linux and .lib files in Windows.

This README describes what each program is doing;

The file main.h is a local header file that contains function definitions.

The file libmy.a is a static library containing functions we created in past projects.

The file create_static_lib.sh is a script that creates a static library called liball.a from all the .c files that are in the current directory.
