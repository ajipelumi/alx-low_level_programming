#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	if (size > 0)
	{
	int count = size;

	int size_breadth = 0;

	while (size_breadth < count)
	{
	int size_length = 1;

	while (size_length < count)
	{
	_putchar(35);
	size_length++;
	}
	_putchar(35);
	_putchar('\n');
	size_breadth++;
	}
	}
	else
	{
	_putchar('\n');
	}
}
