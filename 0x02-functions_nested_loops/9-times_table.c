#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int num, mult, prod;

	/* loop from 0 to 9 */
	for (num = 0; num <= 9; num++)
	{
		_putchar('0'); /* print 0 */
		/* loop from 1 to 9 */
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(','); /* print comma */
			_putchar(' '); /* print space */
			prod = num * mult; /* multiply to get product */
			if (prod <= 9) /* if product is single digit */
			{
				_putchar(' '); /* print space */
			}
			else /* if product is double digit */
			{
				_putchar((prod / 10) + '0'); /* find the quotient and print */
			}
			_putchar((prod % 10) + '0'); /* find remainder and print */
		}
	_putchar('\n'); /* print newline */
	}
}
