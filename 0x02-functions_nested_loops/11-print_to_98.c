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
	printf("%d, ", i);
	}
	printf("%d\n", 98);
	}
	else if (n < 98)
	{
	for (i = n; i < 98; i = i + 1)
	{
	printf("%d, ", i);
	}
	printf("%d\n", 98);
	}
	else
	{
	printf("%d\n", n);
	}
}
