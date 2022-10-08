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

	if (n <= 15 && n >= 0)
	{
	for (i = 0; i <= n; i++)
	{
	_putchar(48);
	for (j = 1; j <= n; j++)
	{
	_putchar(',');
	_putchar(' ');
	multi = i * j;
	if (multi <= 9)
	_putchar(' ');
	if (multi <= 99)
	_putchar(' ');
	if (multi >= 100)
	{
	_putchar((multi / 100) + 48);
	_putchar((multi / 10) % 10 + 48);
	_putchar((multi % 10) + 48);
	}
	else if (multi <= 99 && multi >= 10)
	{
	_putchar((multi / 10) + 48);
	_putchar((multi % 10) + 48);
	}
	else
	{
	_putchar(multi + 48);
	}
	}
	_putchar('\n');
	}
	}
}
