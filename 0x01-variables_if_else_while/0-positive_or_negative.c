#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main will assign a random number to the variable n each time
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) /* if n is greater than 0 */
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0) /* if n is less than 0 */
	{
		printf("%d is negative\n", n);
	}
	else /* if n is equal to 0 */
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
