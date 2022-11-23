#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		/* check for multiples of 3 and 5 */
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i; /* sum increases when a multiple is met */
		}
	}
	printf("%d\n", sum); /* print the sum */
	return (0);
}
