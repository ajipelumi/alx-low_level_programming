#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long long fb1 = 0, fb2 = 1;
	unsigned long long sum;

	for (i = 0; i < 98; i++) /* loop from 0 to 98 */
	{
		sum = fb1 + fb2; /* get sum */
		printf("%llu", sum); /* print sum */
		fb1 = fb2;
		fb2 = sum;
		if (i != 97) /* if i is not 97 */
		{
			printf(", "); /* print comma and space */
		}
	}
	printf("\n"); /* print newline */
	return (0);
}
