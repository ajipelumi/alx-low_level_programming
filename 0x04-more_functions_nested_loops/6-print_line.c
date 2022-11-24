#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: function input
 *
 * Return: void
 */

void print_line(int n)
{
	int count;
	int k;

	if (n > 0) /* if n is greater than 0 */
	{
		count = n;
		k = 0;
		while (k < count) /* loop from 0 to count */
		{
			_putchar('_'); /* print line */
			k++;
		}
		_putchar('\n'); /* print newline */
	}
	else /* n is less than or equal to 0 */
	{
		_putchar('\n'); /* print newline */
	}
}
