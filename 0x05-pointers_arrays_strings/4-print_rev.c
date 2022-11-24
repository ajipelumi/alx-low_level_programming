#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: function input
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		; /* gets string length */
	}
	/* decrease len to exempt null character and loop through string */
	for (--len; len >= 0; --len)
	{
		_putchar(s[len]); /* print one character at a time */
	}
	_putchar('\n'); /* print newline */
}
