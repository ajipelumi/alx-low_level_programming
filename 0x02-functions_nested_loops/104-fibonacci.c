#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line.
 *
 * @void: no input
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long long fb1 = 0, fb2 = 1;
	unsigned long long sum;

	for (i = 0; i < 98; i++)
	{
	sum = fb1 + fb2;
	printf("%llu", sum);
	fb1 = fb2;
	fb2 = sum;
	if (i != 97)
	{
	printf(", ");
	}
	}
	printf("\n");
	return (0);
}
