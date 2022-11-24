#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int len, sign, digit;

	len = 0;
	digit = 0;
	sign = 1;

	while (s[len] != '\0') /* loop through string */
	{
		if (s[len] == '-') /* if a minus sign is met */
		{
			sign = sign * -1; /* sign is adjusted */
		}
		/* if character is between 0 and 9 */
		else if (s[len] >= '0' && s[len] <= '9')
		{
			/* convert character to integer */
			digit = (digit * 10) + (s[len] - '0');
		}
		else if (digit > 0) /* if digit is positive */
		{
			break; /* exit while loop */
		}
		len++; /* go to next string */
	}
	return (digit * sign); /* return digit * sign */
}
