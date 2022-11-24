#include <stdio.h>
#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout
 *
 * @str: function input
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	/* iterate through string */
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]); /* print one character at a time */
	}
}
