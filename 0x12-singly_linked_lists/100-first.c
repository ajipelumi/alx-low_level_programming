#include <stdio.h>

/* The constructor attribute to print_first() executes before main */

void print_first(void) __attribute__ ((constructor));

/**
 * print_first - prints before the main function is executed
 *
 * Return: void
 */

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");
}
