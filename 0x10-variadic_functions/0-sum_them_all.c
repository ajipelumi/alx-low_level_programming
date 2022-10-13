#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums of all its parameters
 *
 * @n: fixed number of parameters
 *
 * Return: the sum of all its parameters, 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n != 0)
	{
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
	sum = sum + va_arg(ap, int);
	}
	return (sum);
	}
	else
	{
	return (0);
	}
}
