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
	if (c < 97 || c > 122 && c < 65 || c > 90)
	{
	return (0);
	}
	return (1);
}
