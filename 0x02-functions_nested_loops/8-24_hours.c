#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a = a + 1)
	{
	for (b = 0; b <= 59; b = b + 1)
	{
	_putchar((a / 10) + '0');
	_putchar((a % 10) + '0');
	_putchar(':');
	_putchar((b / 10) + '0');
	_putchar((b % 10) + '0');
	_putchar('\n');
	}
	}
}
