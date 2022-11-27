#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr = NULL;

	if (min > max) /* if minimum is greater than maximum */
	{
		return (NULL);
	}
	/* allocate memory */
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL) /* if malloc fails */
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		/* array contains the values from min to max */
		ptr[i] = min;
		min++;
	}
	return (ptr); /* return pointer */
}
