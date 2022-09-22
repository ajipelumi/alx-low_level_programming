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

	for (i = 0; i < j / 2; i++)
	{
		swap = a[i];
		a[i] = a[n - 1];
		a[n - 1] = swap;
		n--;
	}
}
