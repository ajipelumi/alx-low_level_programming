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
	char *ptr = NULL;

	if (nmemb == 0 || size == 0) /* if there is no size */
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size); /* allocate memory */
	if (ptr == NULL) /* if malloc fails */
	{
		return (NULL);
	}
	/* call function to set memory to 0 */
	_memset(ptr, 0, (nmemb * size));
	return (ptr); /* return pointer */
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

	for (i = 0; i < n; i++) /* loop until n */
	{
		s[i] = b; /* set value of string */
	}
	return (s); /* return string */
}
