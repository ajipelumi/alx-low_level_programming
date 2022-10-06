#include <stdlib.h>
#include <stdio.h>
#include "main.h"

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: number of memory to be allocated
 * @size: size of bytes to be allocated
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
	return (NULL);
	}
	_memset(ptr, 0, (nmemb * size));
	return (ptr);
}

/**
 * _memset - fills memory with a constant byte
 *
 * @s: string to be examined
 * @b: constant byte
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
