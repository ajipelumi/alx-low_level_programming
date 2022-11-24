#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	while (n % 2 == 0) /* while num is divisible by 2 (even) */
	{
		max = 2; /* store 2 as largest prime factor */
		n /= 2; /* divide num by 2 */
	}
	/* when num is odd number */
	for (i = 3; i <= sqrt(n); i = i + 2) /* loop until root of num */
	{
		while (n % i == 0) /* while num is divisible by an odd num */
		{
			max = i; /* store odd num as largest prime factor */
			n = n / i; /* divide num by odd num */
			/* odd num is increased by 2 to get only odd numbers */
		}
	}
	if (n > 2) /* if num is greater than 2, then max cannot be 1 */
	{
		max = n; /* num is the largest prime factor */
	}
	printf("%ld\n", max); /* print max */
	return (0);
}
