#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, mid;

	if (array == NULL) /* if array is null */
	{
		return (-1);
	}

	left = 0;
	right = (size - 1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
			{
				printf(", ");
			}
		}
		printf("\n");
		/* find middle index */
		mid = left + (right - left) / 2;
		/* element at mid index is less than value */
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		/* element at mid index is greater than value */
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		/* element at mid index is value */
		else
		{
			return (mid);
		}
	}
	return (-1); /* value not found */
}
