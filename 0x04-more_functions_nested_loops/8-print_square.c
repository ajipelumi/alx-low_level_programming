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
	int count;
	int size_breadth;
	int size_length;

	if (size > 0) /* if size is greater than 0 */
	{
		count = size;
		size_breadth = 0;
		while (size_breadth < count) /* loop from breadth to count */
		{
			size_length = 1;
			while (size_length < count) /* loop from length to count */
			{
				_putchar(35); /* print '#' */
				size_length++; /* increase lenght until count */
			}
			_putchar(35); /* print '#' */
			_putchar('\n'); /* print newline */
			size_breadth++; /* increase breadth until count */
		}
	}
	else /* size is less than or equal to 0 */
	{
		_putchar('\n'); /* print newline */
	}
}
