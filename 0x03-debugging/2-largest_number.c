#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 *
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c) /* if a is largest */
	{
		largest = a;
	}
	else if (b >= a && b >= c)  /* if b is largest */
	{
		largest = b;
	}
	else  /* if c is largest */
	{
		largest = c;
	}
	return (largest); /* return largest */
}
