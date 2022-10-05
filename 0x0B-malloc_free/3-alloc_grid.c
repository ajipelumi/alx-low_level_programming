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

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	ptr[i] = malloc(sizeof(int) * width);
	if (ptr[i] == NULL)
	{
	for (i = width; i >= 0; i--)
	{
	free(ptr[i]);
	}
	free(ptr);
	return (NULL);
	}
	for (j = 0; j < width; j++)
	{
	ptr[i][j] = 0;
	}
	}
	return (ptr);
}
