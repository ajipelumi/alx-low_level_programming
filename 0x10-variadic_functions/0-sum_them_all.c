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
	va_list ap; /* define argument list */
	unsigned int i;
	int sum = 0;

	if (n != 0) /* if number of parameters isn't 0 */
	{
		va_start(ap, n); /* initialize argument list */
		for (i = 0; i < n; i++)
		{
			/* get the next argument value */
			sum = sum + va_arg(ap, int);
		}
		va_end(ap); /* clean up */
		return (sum);
	}
	else /* number of parameters is 0 */
	{
		return (0);
	}
}
