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

	if (n < 0)
	{
	lastdigit = (n % 10) * -1;
	}
	else
	{
	lastdigit = n % 10;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
