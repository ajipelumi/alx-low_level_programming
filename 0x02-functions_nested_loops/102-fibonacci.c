#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line.
 *
 * @void: no input
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long unsigned int fb1 = 0, fb2 = 1;
	long unsigned int sum;

	for (i = 0; i < 50; i++)
	{
	sum = fb1 + fb2;
	printf("%lu", sum);
	fb1 = fb2;
	fb2 = sum;
	if (i != 49)
	{
	printf(", ");
	}
	}
	printf("\n");
	return (0);
}
