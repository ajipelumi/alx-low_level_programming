#include <string.h>
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: double pointer character
 * @to: character pointer
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to; /* s takes the address of to */
}
