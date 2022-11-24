#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 followed by \n
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++) /* loop from 0 to 9 */
	{
		if (i != 50 && i != 52) /* exclude 2 and 4 */
		{
			_putchar(i); /* print number */
		}
	}
	_putchar('\n'); /* print newline */
}
