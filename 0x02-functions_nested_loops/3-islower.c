#include <ctype.h>
#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: checks input of the function
 *
 * Return: 1 if c is lowercase, othrwise 0
 */
int _islower(int c)
{
	int i;

	if (i < 97 && i > 122)
	{
	return (0);
	}
	return (1);
}
