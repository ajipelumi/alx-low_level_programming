#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: array column
 * @height: array row
 *
 * Return: pointer to a 2 dimensional array of integers, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0) /* if column and array have negative values */
	{
		return (NULL);
	}
	/* allocate memory for pointers */
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL) /* if malloc fails */
	{
		return (NULL);
	}
	for (i = 0; i < height; i++) /* array row */
	{
		/* allocate memory to store integers */
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL) /* if malloc fails */
		{
			for (i = width; i >= 0; i--)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++) /* array column */
		{
			ptr[i][j] = 0; /* initialize each element to 0 */
		}
	}
	return (ptr); /* return pointer to array */
}
