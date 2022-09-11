#include <stdio.h>
/**
 * main - main prints all possible combinations of three digit.
 *
 * Return: 0
 */
int main(void)
	{
	 int a, b, c;

	for (a = 0; a < 8; a++)
	{
	for (b = 1; b < 9; b++)
	{
	for (c = 2; c < 10; c++)
	{
	if (a != b && a < b && b != c && b < c)
	{
	putchar(a + '0');
	putchar(b + '0');
	putchar(c + '0');
	if (a != 7 || b != 8 || c != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
