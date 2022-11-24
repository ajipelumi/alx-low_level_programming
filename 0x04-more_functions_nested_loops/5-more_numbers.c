#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++) /* loop from 0 to 9 */
	{
		for (j = 0; j <= 14; j++) /* loop from 0 to 14 */
		{
			k = j;
			if (j >= 10) /* check if digit is double */
			{
				_putchar(1 + 48); /* print 1 */
				k = j % 10; /* find the remainder */
			}
			_putchar(k + 48); /* print number */
		}
		_putchar('\n'); /* print newline */
	}
}
