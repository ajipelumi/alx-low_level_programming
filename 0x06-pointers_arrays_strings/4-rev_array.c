#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array
 * @n: array length
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j = n;
	int swap;

	/* loop through array */
	for (i = 0; i < j / 2; i++)
	{
		swap = a[i]; /* assign first element to swap */
		a[i] = a[n - 1]; /* assign reverse element */
		a[n - 1] = swap; /* last index takes first element */
		n--;
	}
}
