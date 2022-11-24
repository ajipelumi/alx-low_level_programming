#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0) /* if number is negative */
	{
		n1 = -(n); /* change num to positive and store in n1 */
		_putchar('-'); /* print negative sign */
	}
	else /* number is positive */
	{
		n1 = n; /* store number in n1 */
	}

	if (n1 / 10) /* if number is not single digit */
	{
		print_number(n1 / 10); /* recursion to get single digit */
	}
	_putchar((n1 % 10) + '0'); /* print number */
}
