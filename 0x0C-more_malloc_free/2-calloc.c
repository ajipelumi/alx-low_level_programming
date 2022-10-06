#include <stdlib.h>
#include <stdio.h>
#include "main.h"

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
	unsigned int i;
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	ptr = malloc(sizeof(int) * nmemb + 1);
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
	ptr[i] = 0;
	}
	return (ptr);
}