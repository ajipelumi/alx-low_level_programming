#include <string.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: buffer
 * @b: constant byte
 * @n: first n bytes
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int len;

	/* loop until the first n bytes */
	for (len = 0; len < n; len++)
	{
		s[len] = b; /* fill string with a constant byte */
	}
	return (s); /* return string */
}
