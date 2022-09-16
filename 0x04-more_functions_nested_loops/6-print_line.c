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
	if (n > 0)
	{
	int count = n;

	int k = 0;

	while (k <= count)
	{
	_putchar('_');
	k++;
	}
	_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
