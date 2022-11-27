#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array to be searched
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array && cmp)
	{
		/* loop through array elements */
		for (i = 0; i < size; i++)
		{
			/* calls function to compare elements */
			if (cmp(array[i]) != 0)
			{
				return (i); /* return index of matching elements */
			}
		}
		if (cmp(array[i]) == 0) /* no element matches */
		{
			return (-1);
		}
	}
	return (-1);
}
