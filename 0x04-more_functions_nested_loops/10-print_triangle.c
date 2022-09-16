#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
	int hgt, base;

	for (hgt = 1; hgt <= size; hgt++)
	{
	for (base = 1; base <= size; base++)
	{
	if ((hgt + base) <= size)
	{
	_putchar(' ');
	}
	else
	{
	_putchar(35);
	}
	}
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
