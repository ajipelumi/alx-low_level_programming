#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
	int a, b;

	/* loop through 24 hours */
	for (a = 0; a <= 23; a++)
	{
		/* loop through 60 minutes */
		for (b = 0; b <= 59; b++)
		{
			_putchar((a / 10) + '0'); /* print hours comb */
			_putchar((a % 10) + '0'); /* print hours comb */
			_putchar(':'); /* print colon */
			_putchar((b / 10) + '0'); /* print minute comb */
			_putchar((b % 10) + '0'); /* print minute comb */
			_putchar('\n'); /* print newline */
		}
	}
}
