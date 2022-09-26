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
	memcpy(dest, src, n);
	return (dest);
}
