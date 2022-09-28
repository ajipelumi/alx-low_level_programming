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
	if (*s == '\0')
	{
	return (0);
	}
	else
	{
	int count;

	s++;
	return (count = 1 + _strlen_recursion(s));
	}
}
