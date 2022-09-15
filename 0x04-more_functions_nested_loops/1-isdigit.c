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
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
