#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: function input
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int i = 0;

	if (n > 98)
	{
	for (i = n; i > 98; i = i - 1)
	{
	_putchar(i);
	_putchar(',');
	_putchar(' ');
	}
	}
	else if (n < 98)
	{
	for (i = n; i < 98; i = i + 1)
	{
	_putchar(i);
	_putchar(',');
	_putchar(' ');
	}
	}
	else
	{
	_putchar(i);
	}
	_putchar('\n');
}
