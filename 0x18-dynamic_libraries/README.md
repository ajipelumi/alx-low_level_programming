When a C program is compiled, the compiler generates object code.
After generating the object code, the compiler also invokes *linker*.
One of the main tasks for linker is to make code of library functions (eg printf(), scanf(), sqrt(), ..etc) available to our program.

A linker can accomplish this task in two ways, by copying the code of library function to our object code, or by making some arrangements so that the complete code of library functions is not copied, but made available at run-time.

While *Static Linking* requires the code of library functions be copied to our object code, *Dynamic Linking* doesn’t require the code to be copied, it is done by just placing name of the library in the binary file.

The actual linking happens when the program is run, when both the binary file and the library are in memory.
Examples of Dynamic libraries (libraries which are linked at run-time) are, `.so` in *Linux* and `.dll` in *Windows*.

This README decribes what each script/program is doing:

The file `main.h` is a local header file that contains function definitions.

The file `libdynamic.so` is a dynamic library containing given functions, there definitions can be found in the header file.

The file `1-create_dynamic_lib.sh` is a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.

The file `100-operations.so` is a dynamic library that contains C functions that can be called from Python.
