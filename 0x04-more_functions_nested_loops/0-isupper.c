#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: character input
 *
 * Return: uppercase returns 1, else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90) /* check if character is uppercase */
	{
		return (1); /* character is uppercase */
	}
	else
	{
		return (0); /* character is lowercase */
	}
}
