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
	int hgt, base;

	if (size > 0) /* if size is greater than 0 */
	{
		/* loop from height to size */
		for (hgt = 1; hgt <= size; hgt++)
		{
			/* loop from base to size */
			for (base = 1; base <= size; base++)
			{
				if ((hgt + base) <= size)
				{
					_putchar(' '); /* print space */
				}
				else
				{
					_putchar(35); /* print '#' */
				}
			}
			_putchar('\n'); /* print newline */
		}
	}
	else
	{
		_putchar('\n'); /* print newline */
	}
}
