*Doubly linked list* is a complex type of linked list in which a node contains a pointer to the previous as well as the next node in the sequence.
Therefore, in a doubly linked list, a node consists of three parts: node data, pointer to the next node in sequence (next pointer), pointer to the previous node (previous pointer).

The structure of a node in doubly linked list can be given as:
```c
struct node   
{ 
    int data;
    struct node *prev;     
    struct node *next;   
}
```

This README decribes what each program is doing:

The file `lists.h` is a local header file that contains function definitions.

The file `0-print_dlistint.c` is a program that prints all the elements of a `dlistint_t` list.

The file `1-dlistint_len.c` is a program that returns the number of elements in a linked `dlistint_t` list.

The file `2-add_dnodeint.c` is a program that adds a new node at the beginning of a `dlistint_t` list.

The file `3-add_dnodeint_end.c` is a program that adds a new node at the end of a `dlistint_t` list.

The file `4-free_dlistint.c` is a program that frees a `dlistint_t` list.

The file `5-get_dnodeint.c` is a program that returns the nth node of a `dlistint_t` linked list.

The file `6-sum_dlistint.c` is a program that returns the sum of all the data (n) of a `dlistint_t` linked list.

The file `7-insert_dnodeint.c` is a program that inserts a new node at a given position.

The file `8-delete_dnodeint.c` is a program that deletes the node at index `index` of a `dlistint_t` linked list.

The file `100-password` is a program that finds the password for [crackme4](https://github.com/holbertonschool/0x17.c).

The file `102-result` is a program that contains the largest palindrome made from the product of two 3-digit numbers.
