#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: digit input
 *
 * Return: digit returns 1, else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57) /* check if input is a digit */
	{
		return (1); /* input is a digit */
	}
	else
	{
		return (0); /* input is not a digit */
	}
}
