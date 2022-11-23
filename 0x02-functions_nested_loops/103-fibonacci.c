#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms, followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long fb1 = 0, fb2 = 1;
	unsigned long even = 0;
	unsigned long sum;

	/* sum does not exceed 4000000 */
	for (i = 0; sum <= 4000000; i++)
	{
		sum = fb1 + fb2; /* get sum */
		if (sum % 2 == 0) /* check if sum is even */
		{
			even = even + sum; /* add even sums */
		}
		fb1 = fb2;
		fb2 = sum;
	}
	printf("%lu\n", even); /* prints the sum of the even-valued terms */
	return (0);
}
