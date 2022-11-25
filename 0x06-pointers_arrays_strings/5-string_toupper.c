#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @str: string character
 *
 * Return: string with uppercase characters
 */

char *string_toupper(char *str)
{
	int i;

	/* loop from 'a' to 'z' and replace with 'A' to 'Z' */
	for (i = 0; str[i]; i++)
	{
		/* replace any lowercase character with uppercase */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32; /* replaces with ASCII code */
		}
	}
	return (str); /* return string */
}
