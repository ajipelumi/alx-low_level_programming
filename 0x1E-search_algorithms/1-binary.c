#include "search_algos.h"

int binary(int *array, size_t low, size_t high, int value);

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
	int idx;

	if (array == NULL) /* if array is null */
	{
		return (-1);
	}

	if (size == 0) /* if size is zero */
	{
		return (-1);
	}

	/* call binary function to search array */
	idx = binary(array, 0, size - 1, value);
	if (idx != -1)
	{
		return (idx);
	}

	return (-1);
}

/**
 * binary - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @low: lowest index in the array
 * @high: highest index in the array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */

int binary(int *array, size_t low, size_t high, int value)
{
	size_t i, mid;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
		{
			printf(", ");
		}
	}
	printf("\n");

	if (low >= high) /* base case for recursive function */
	{
		return (-1);
	}

	mid = low + (high - low) / 2; /* find middle index */

	/* if element at middle index is the value to search for */
	if (array[mid] == value)
	{
		return (mid); /* return middle index */
	}

	/* if element at middle index is greater than value to search for */
	else if (array[mid] > value)
	{
		return (binary(array, low, mid - 1, value)); /* search left side */
	}

	/* if element at middle index is less than value to search for */
	else
	{
		return (binary(array, mid + 1, high, value)); /* search right side */
	}
}
