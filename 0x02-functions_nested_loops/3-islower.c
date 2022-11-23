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
	if (c < 97 || c > 122) /* check if character is lowercase */
	{
		return (0); /* character is not lowercase */
	}
	return (1); /* character is lowercase */
}
