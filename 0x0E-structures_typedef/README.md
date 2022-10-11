A structure creates a data type that can be used to group items of possibly different types into a single type.

*struct* keyword is used to create a structure.

A structure variable can either be declared with structure declaration or as a separate declaration like basic types. Structure members cannot be initialized with declaration. Structure members can be initialized using curly braces ‘{}’. Structure members are accessed using dot (.) operator.

The *typedef* is used to give data type a new name.

The file dog.h is a local header file that contains our `struct type dog` and other function definitions.

The file 1-init_dog.c is a function that initialize a variable of type `struct dog`.

The file 2-print_dog.c is a function that prints a `struct dog`.

The file 4-new_dog.c is a function that creates a new dog.

The file 5-free_dog.c is a function that frees dog.
