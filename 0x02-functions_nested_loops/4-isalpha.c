#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks for a letter, lower or uppercase
 *
 * @c: checks input of the function
 *
 * Return: 1 if c is letter, othrwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
