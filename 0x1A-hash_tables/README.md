<img src="https://github.com/ajipelumi/alx-low_level_programming/blob/579faa17ea6ee34b12b4dfc1aca95c154de3b608/images/hash-table.png" alt="hash table" width="400">
Image Credit: Khalil Stemmler

##

A **[Hash Table](https://en.wikipedia.org/wiki/Hash_table)** (Associative array) is a data structure that maps keys to values.
This uses a hash function to compute indexes for a key.

Based on the Hash Table index, we can store the value at the appropriate location.

If two different keys get the same index, we need to use other data structures (linked list) to account for these collisions.

The whole benefit of using a **Hash Table** is due to its very fast access time.
While there can be a collision, if we choose a very good hash function, this chance is almost zero.

This README decribes what each program is doing:

The file `hash_tables.h` is a local header file that contains function definitions.

The file `0-hash_table_create.c` is a program that creates a hash table.

The file `1-djb2.c` is a hash function implementing the [djb2](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8) algorithm.

The file `2-key_index.c` is a program that gives you the index of a key.

The file `3-hash_table_set.c` is a program that adds an element to the hash table.

The file `4-hash_table_get.c` is a program that retrieves a value associated with a key.

The file `5-hash_table_print.c` is a program that prints a hash table.

The file `6-hash_table_delete.c` is a program that deletes a hash table.
