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
	size_t i, start, end;

	if (array == NULL) /* if array is null */
	{
		return (-1);
	}

	start = 0;
	end = sqrt(size);
	printf("Value checked array[%d] = [%d]\n", (int)start, array[start]);

	while (array[end] < value && end < size)
	{
		start = end;
		end += sqrt(size);
		printf("Value checked array[%d] = [%d]\n", (int)start, array[start]);
	}

	printf("Value found between indexes [%d] and [%d]\n", (int)start, (int)end);

	end = (end < size) ? end : size - 1;

	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1); /* value is not found in array */
}
