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
	int i, length;

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	length = i;
	if (length % 2 == 0)
	{
	int middle = length / 2;

	for (i = middle; i < length; i++)
	{
	_putchar(str[i]);
	}
	}
	else
	{
	int middle = (length - 1) / 2;

	for (i = (middle + 1); i < length; i++)
	{
	_putchar(str[i]);
	}
	}
	_putchar('\n');
}
