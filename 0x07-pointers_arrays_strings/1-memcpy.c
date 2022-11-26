#include <string.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination area
 * @src: memory area to be copied
 * @n: n bytes
 *
 * Return: pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int len;

	/* loop until n bytes is met */
	for (len = 0; len < n; len++)
	{
		dest[len] = src[len]; /* copy src to dest */
	}
	return (dest); /* return copied string */
}
