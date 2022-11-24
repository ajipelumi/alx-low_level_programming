#include <stdio.h>
#include "main.h"

/**
 * print_array -  prints n elements of an array
 * of integers, followed by a new line
 *
 * @a: array name
 * @n: array size
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	/* iterate through array */
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]); /* print array element one after another */
		if (i != (n - 1)) /* if last element is not met */
		{
			printf(","); /* print comma */
			printf(" "); /* print space */
		}
	}
	printf("\n"); /* print newline */
}
