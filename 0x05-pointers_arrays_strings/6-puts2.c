#include <string.h>
#include "main.h"

/**
 * puts2 -  prints every other character of a string, starting
 * with the first character, followed by a new line
 *
 * @str: function input
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, length;

	/* loop through string */
	for (i = 0; str[i] != '\0'; i++)
	{
		; /* get string length */
	}
	length = i; /* assign string length to length */
	for (i = 0; i < length; i++) /* loop through string */
	{
		if (i % 2 == 0) /* if index is even number */
		{
			_putchar(str[i]); /* print one character at a time */
		}
	}
	_putchar('\n'); /* print newline */
}
