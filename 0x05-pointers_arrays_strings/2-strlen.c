#include <string.h>
#include "main.h"

/**
 * _strlen -  returns the length of a string
 *
 * @s: function input
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
	i++;
	}
	return (i);
}
