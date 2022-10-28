#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: decimal to be converted
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/* n >> 1 is the division of n by 2 */
		print_binary(n >> 1); /* recursive function */
	}
	_putchar((n & 1) + 48); /* prints the remainder */
}
