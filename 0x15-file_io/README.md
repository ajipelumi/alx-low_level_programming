In Unix and Unix-like computer operating systems, a **file descriptor** is a process-unique identifier (handle) for a file or other input/output resource.

File descriptors typically have non-negative integer values, with negative values being reserved to indicate "no value" or error conditions.

File descriptors are a part of the POSIX API. Each Unix process should have three standard POSIX file descriptors, corresponding to the three standard streams:

| Integer value | Name | <unistd.h> symbolic constant |
| :---: |     :----:     |   :---:   |
| 0    | Standard Input | STDIN_FILENO  |
| 1    | Standard Output | STDOUT_FILENO |
| 2    | Standard Error | STDERR_FILENO |

Most operations on file descriptors are declared in the `<unistd.h>` header, but some are in the `<fcntl.h>` header instead.

This README describes what each program is doing;

The file `main.h` is a local header file that contains function definitions.

The file `_putchar.c` is a function that allows the usage of _putchar to print.

The file `0-read_textfile.c` is a function that reads a text file and prints it to the POSIX standard output.

The file `1-create_file.c` is a function that creates a file.

The file `2-append_text_to_file.c` is a function that appends text at the end of a file.

The file `3-cp.c` is a program that copies the content of a file to another file.
