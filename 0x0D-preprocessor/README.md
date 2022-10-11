**Preprocessors** are programs that process our source code before compilation.

The source code written by programmers is first stored in a file, let the name be `program.c`. This file is then processed by **preprocessors** and an expanded source code file is generated named `program.i`. This expanded file is compiled by the **compiler** and an assembly code with the name `program.s` is generated. The assembler converts the assembly code into a machine code and an object code file is generated named `program.obj`. Finally, the **linker** links this object code file to the object code of the library functions to generate the executable file `program.exe`.

Preprocessor programs provide preprocessor directives that tell the compiler to preprocess the source code before compiling. All of these preprocessor directives begin with a `#` (hash) symbol. The `#` symbol indicates that whatever statement starts with a `#` will go to the preprocessor program to get executed. Examples of some preprocessor directives are: `#include`, `#define`, `#ifndef` etc. The `#` symbol only provides a path to the preprocessor, and a command such as include is processed by the preprocessor program. For example, `#include` will include extra code in our program. We can place these preprocessor directives anywhere in our program.

The file 0-object_like_macro.h is a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

The file 1-pi.h is a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

The file 2-main.c is a program that prints the name of the file it was compiled from, followed by a new line.

The file 3-function_like_macro.h is a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

The file 4-sum.h is a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.
