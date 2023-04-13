#include "search_algos.h"

int binary(int *array, size_t left, size_t right, int value);

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left, right, idx;

	if (array == NULL) /* if array is null */
	{
		return (-1);
	}

	left = 0;
	right = (size - 1);
	idx = binary(array, left, right, value);
	return (idx);
}

/**
 * binary - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @left: starting index of array
 * @right: last index of array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */

int binary(int *array, size_t left, size_t right, int value)
{
	size_t i, mid;

	if (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");
		mid = left + (right - left) / 2; /* find middle index */
		if (array[mid] < value) /* element at mid index is less than value */
		{
			return (binary(array, mid + 1, right, value));
		}
		else if (array[mid] > value) /* element at mid index is greater than value */
		{
			return (binary(array, left, mid - 1, value));
		}
		else /* element at mid index is value */
		{
			if (mid > 0 && array[mid - 1] == value) /* check for duplicate values */
			{
				return (binary(array, left, mid, value));
			}
			else /* no duplicate is met */
			{
				return (mid);
			}
		}
	}
	return (-1); /* value not found */
}
