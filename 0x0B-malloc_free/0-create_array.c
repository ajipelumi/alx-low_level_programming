#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 *
 * @size: size of the array
 * @c: character input
 *
 * Return: pointer to the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0) /* if array has no size */
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size); /* allocate memory */
	if (ptr == NULL) /* if malloc fails */
	{
		return (NULL);
	}
	/* loop until end of array */
	for (i = 0; i < size; i++)
	{
		ptr[i] = c; /* assign character to allocated memory */
	}
	return (ptr); /* pointer to array */
}
