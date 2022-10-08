#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms, followed by a new line
 *
 * @void: no input
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long fb1 = 0, fb2 = 1;
	unsigned long even = 0;
	unsigned long sum;

	for (i = 0; sum <= 4000000; i++)
	{
	sum = fb1 + fb2;
	if (sum % 2 == 0)
	{
	even = even + sum;
	}
	fb1 = fb2;
	fb2 = sum;
	}
	printf("%lu\n", even);
	return (0);
}
