#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s: string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /* if null byte is met */
	{
		_putchar('\n');
	}
	else /* null byte is not met */
	{
		_putchar(*s); /* print character one at a time */
		s++; /* go to the next character */
		_puts_recursion(s); /* call function again */
	}
}
