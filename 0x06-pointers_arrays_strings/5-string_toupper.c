#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @str: string character
 *
 * Return: uppercase character
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
