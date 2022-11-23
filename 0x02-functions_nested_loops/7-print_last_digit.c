#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: takes the function input
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0) /* if n is a negative digit */
	{
		lastdigit = (n % 10) * -1; /* get last digit and change to positive */
	}
	else /* if n is a positive digit */
	{
		lastdigit = n % 10; /* get last digit */
	}
	_putchar(lastdigit + '0'); /* print last digit */
	return (lastdigit); /* return last digit */
}
