#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string to be scanned
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int count;

	if (*s == '\0') /* if null byte is met */
	{
		return (0);
	}
	else /* null byte is not met */
	{
		s++; /* point to the next character */
		/* count is updated everytime the func returns until a null byte is met */
		return (count = 1 + _strlen_recursion(s));
	}
}
