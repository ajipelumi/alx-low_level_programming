#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - will assign a random number to the variable n each time.
 *
 * Return: 0
*/

int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (d > 5) /* if d is greater than 5 */
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, d);
	}
	else if (d == 0) /* if d is equal to 0 */
	{
		printf("Last digit of %d is %d and is 0\n", n, d);
	}
	else /* if d is less than 6 and not 0 */
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
	}
	return (0);
}
