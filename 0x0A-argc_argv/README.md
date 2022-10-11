We can also give command-line arguments in C. Command-line arguments are given after the name of the program in command-line shell of Operating Systems.
To pass command line arguments, we typically define main() with two arguments : first argument is the number of command line arguments and second is list of command-line arguments.

#### Properties of Command-line arguments.

- argc (ARGument Count) is int and stores number of command-line arguments passed by the user including the name of the program. So if we pass a value to a program, value of argc would be 2 (one for argument and one for program name)
- The value of argc should be non negative.
- argv(ARGument Vector) is array of character pointers listing all the arguments.
- If argc is greater than zero,the array elements from argv[0] to argv[argc-1] will contain pointers to strings.
- Argv[0] is the name of the program , After that till argv[argc-1] every element is command -line arguments.

This README describes what each program is doing;

The file 0-whatsmyname.c is a program that prints its name, followed by a new line.

The file 1-args.c is a program that prints the number of arguments passed into it.

The file 2-args.c is a program that prints all arguments it receives.

The file 3-mul.c is a program that multiplies two numbers.

The file 4-add.c is a program that adds positive numbers.

The file 100-change.c is a program that prints the minimum number of coins to make change for an amount of money.
