#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string to be reversed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* if null byte is met */
	{
		return;
	}
	else /* null byte is not met */
	{
		s++; /* go to the next character */
		_print_rev_recursion(s); /* call function again */
	}
	/* function is called until null byte and then printed in reverse */
	_putchar(*--s); /* print one character at a time */
}
