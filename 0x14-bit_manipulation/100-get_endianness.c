#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *) &i; /* points to the first byte of the integer i */
	if (*c == 1)
	{
		return (1); /* little endianness */
	}
	return (0); /* big endianness */
}
