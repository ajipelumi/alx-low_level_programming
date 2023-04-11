#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL) /* if array is null */
	{
		return (-1);
	}

	/* loop through array */
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		/* check for value */
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1); /* value is not found in array */
}
