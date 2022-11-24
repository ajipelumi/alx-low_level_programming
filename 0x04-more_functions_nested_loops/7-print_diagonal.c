#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal
 *
 * @n: function input
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int count;
	int space;

	if (n > 0) /* if n is greater than 0 */
	{
		count = 0;
		space = 0;
		while (n) /* loop until n is 0 */
		{
			space = count;
			while (space)
			{
				_putchar(' '); /* print space */
				space--;
			}
			_putchar(92); /* print '\' */
			_putchar('\n'); /* print mewline */
			n--; /* n decreases */
			count++; /* count increases */
		}
	}
	else /* n is less than or equal to 0 */
	{
		_putchar('\n'); /* print newline */
	}
}
