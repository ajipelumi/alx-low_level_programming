#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	int i, start, end;

	if (array == NULL) /* if array is null */
	{
		return (-1);
	}

	start = 0;
	end = (int)sqrt(size);
	printf("Value checked array[%d] = %d\n", start, array[start]);

	while (array[end] < value && end < (int)size)
	{
		start = end;
		end += (int)sqrt(size);
		printf("Value checked array[%d] = %d\n", start, array[start]);
	}

	printf("Value found between indexes [%d] and [%d]\n", start, end);

	end = (end < (int)size) ? end : (int)size - 1;

	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%d] = %d\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1); /* value is not found in array */
}
