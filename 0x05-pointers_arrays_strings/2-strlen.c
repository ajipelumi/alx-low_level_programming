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
	int len;

	/* loop through string */
	for (len = 0; s[len] != '\0'; s++)
	{
		len++; /* length increases until null byte */
	}
	return (len); /* return string length */
}
