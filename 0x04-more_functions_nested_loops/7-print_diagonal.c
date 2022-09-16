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
	if (n > 0)
	{
	int count = 0;

	int space = 0;

	while (n)
	{
	space = count;
	while (space)
	{
	_putchar(' ');
	space--;
	}
	_putchar(92);
	_putchar('\n');
	n--;
	count++;
	}
	}
	else
	{
	_putchar('\n');
	}
}
