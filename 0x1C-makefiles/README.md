A **Makefile** is a file used to automate the process of building executable programs or libraries from source code. It contains a set of rules that specify how to build the target files from the source files.

Here is an example of a simple Makefile:

```makefile
CC = gcc
CFLAGS = -Wall -g

myprogram: main.o utils.o
    $(CC) $(CFLAGS) main.o utils.o -o myprogram

main.o: main.c utils.h
    $(CC) $(CFLAGS) -c main.c -o nain.o

utils.o: utils.c utils.h
    $(CC) $(CFLAGS) -c utils.c -o utils.o

clean:
    rm -f myprogram *.o
```

In this example, the **Makefile** specifies that the executable `myprogram` should be built from the object files `main.o` and `utils.o`.
The **CC** variable specifies the compiler to use, and the **CFLAGS** variable specifies the compiler options. The **clean** rule is used to remove the generated files.

To use the Makefile, we navigate to the directory containing the **Makefile** and run the command `make`.
This will build the executable program `myprogram`. To remove the generated files, we run the command `make clean`.

This README describes what each Makefile is doing:

The file `0-Makefile` is a makefile that defines a target called `school`. The `school` target depends on `main.c`, `school.c`, and `m.h`.

The file `1-Makefile` is a makefile that defines a target called `school`. The `school` target depends on `main.c`, `school.c`, and `m.h`. It includes the variables **CC** and **SRC**.

The file `2-Makefile` is a makefile that defines a target called `school`. The `school` target depends on `main.c`, `school.c`, and `m.h`. It includes the variables **CC**, **SRC**, **OBJ** and **NAME**.

The file `3-Makefile` is a makefile that defines a target called `school`. The `school` target depends on `main.c`, `school.c`, and `m.h`. It includes the variables **CC**, **SRC**, **RM**, **OBJ** and **NAME**. It also sets the rules `all`, `clean`, `oclean`, `fclean` and `re`.

The file `4-Makefile` is a makefile that defines a target called `school`. The `school` target depends on `main.c`, `school.c`, and `m.h`. It includes the variables **CC**, **SRC**, **RM**, **OBJ**, **NAME** and **CFLAGS**. It also sets the rules `all`, `clean`, `oclean`, `fclean` and `re`.

The file `5-island_perimeter.py` is a function that returns the perimeter of the island described in `grid`.

The file `100-Makefile` is a makefile that defines a target called `school`. The `school` target depends on `main.c`, `school.c`, and `m.h`. It includes the variables **CC**, **SRC**, **RM**, **OBJ**, **NAME** and **CFLAGS**. It also sets the rules `all`, `clean`, `oclean`, `fclean` and `re`. Adds some functionalities.
