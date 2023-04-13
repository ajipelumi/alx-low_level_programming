#include "search_algos.h"

int binary(int *array, size_t left, size_t right, int value);

/**
 * exponential_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, left, right;
	int idx;

	if (array == NULL) /* if array is null */
	{
		return (-1);
	}

	if (array[0] == value) /* if value is met at first index */
	{
		return (0);
	}

	i = 1;
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		i *= 2; /* double i */
	}

	left = i / 2; /* starting index */
	right = (i < size) ? i : size - 1; /* last index */
	printf("Value found between indexes [%d] and [%d]\n", (int)left, (int)right);

	/* call binary search on sub-array */
	idx = binary(array, left, right, value);
	return (idx);
}

/**
 * binary - searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @left: index of starting element
 * @right: index of last element
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */

int binary(int *array, size_t left, size_t right, int value)
{
	size_t i, mid;

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
