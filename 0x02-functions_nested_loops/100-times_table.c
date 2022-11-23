#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: number input
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, multi;

	if (n <= 15 && n >= 0) /* if n is greater than 0 and less than 15 */
	{
		for (i = 0; i <= n; i++) /* loop from 0 to n */
		{
			_putchar(48); /* print 0 */
			for (j = 1; j <= n; j++) /* loop from 1 to n */
			{
				_putchar(','); /* print comma */
				_putchar(' '); /* print space */
				multi = i * j; /* get product */
				if (multi <= 9) /* if product is single digit */
				{
					_putchar(' '); /* print space */
				}
				if (multi <= 99) /* if product is double digit */
				{
					_putchar(' '); /* print space */
				}
				if (multi >= 100) /* if product is triple digit */
				{
					_putchar((multi / 100) + 48); /* print tenth quotient */
					_putchar((multi / 10) % 10 + 48); /* print quotient */
					_putchar((multi % 10) + 48); /* print remainder */
				}
				else if (multi <= 99 && multi >= 10) /* if product is double digit */
				{
					_putchar((multi / 10) + 48); /* print quotient */
					_putchar((multi % 10) + 48); /* print remainder */
				}
				else /* if product is single digit */
				{
					_putchar(multi + 48); /* print product */
				}
			}
			_putchar('\n'); /* print newline */
		}
	}
}
