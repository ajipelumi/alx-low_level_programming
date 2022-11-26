#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: number input
 *
 * Return: factorial
 */

int factorial(int n)
{
	int count;

	if (n < 0) /* if number is less than 0 */
	{
		return (-1);
	}
	else if (n == 0) /* if number is 0 */
	{
		return (1);
	}
	else /* number is greater than 0 */
	{
		/* count is updated everytime the func returns until 0 is met */
		return (count = n * factorial(n - 1)); /* n decreases by 1 until 0 */
	}
}
