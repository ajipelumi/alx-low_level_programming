#include "search_algos.h"

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
				printf(", ");
		}
		printf("\n");
		mid = left + (right - left) / 2; /* find middle index */
		if (array[mid] < value) /* element at mid index is less than value */
		{
			left = mid + 1;
		}
		else if (array[mid] > value) /* element at mid index is greater than value */
		{
			right = mid - 1;
		}
		else /* element at mid index is value */
		{
			if (array[mid - 1] == value) /* check for duplicate values */
			{
				right = mid; /* search array again if duplicate is met */
			}
			else /* no duplicate is met */
				return (mid);
		}
	}
	return (-1); /* value not found */
}
