#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: string character
 *
 * Return: string in uppercase
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0') /* loop through string */
	{
		/* check if character is an aphalbet */
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0) /* the first index */
			{
				str[i] -= 32; /* capitalize the first character */
			}
			/* if there is a separator before the character */
			if (str[i - 1] == 32 || str[i - 1] == 9 || str[i - 1] == 10 ||
			str[i - 1] == 44 || str[i - 1] == 59 || str[i - 1] == 46 ||
			str[i - 1] == 33 || str[i - 1] == 63 || str[i - 1] == 34 ||
			str[i - 1] == 40 || str[i - 1] == 41 || str[i - 1] == 123 ||
			str[i - 1] == 124)
			{
				str[i] -= 32; /* capitalize that character */
			}
		}
		i++;
	}
	return (str); /* return capitalized string */
}
