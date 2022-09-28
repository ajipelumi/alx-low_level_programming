#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: number input
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	int count;

	return (count = n * factorial(n - 1));
	}
}
