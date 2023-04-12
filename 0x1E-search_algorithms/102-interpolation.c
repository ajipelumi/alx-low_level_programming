#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL) /* if array is null */
	{
		return (-1);
	}

	low = 0;
	high = size - 1;
	while (array[high] != array[low] && (value >= array[low])
			&& (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
		(value - array[low]));
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else if (array[pos] > value)
		{
			high = pos - 1;
		}
		else
		{
			return (pos);
		}
	}
	if (value == array[low])
	{
		return (low);
	}
	return (-1); /* value is not found in array */
}
