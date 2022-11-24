#include <string.h>
#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line
 *
 * @str: function input
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, length, middle;

	/* loop through string */
	for (i = 0; str[i] != '\0'; i++)
	{
		; /* get string length */
	}
	length = i; /* assign string length to length */
	if (length % 2 == 0) /* if length is an even number */
	{
		middle = length / 2; /* get middle */
		for (i = middle; i < length; i++) /* loop from half of the string */
		{
			_putchar(str[i]); /* print one character at a time */
		}
	}
	else /* if length is an odd number */
	{
		middle = (length - 1) / 2; /* get middle */
		for (i = (middle + 1); i < length; i++) /* loop from half of the string */
		{
			_putchar(str[i]); /* print one character at a time */
		}
	}
	_putchar('\n'); /* print newline */
}
