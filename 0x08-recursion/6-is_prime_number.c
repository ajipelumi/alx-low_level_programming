#include <stdio.h>
#include "main.h"

int prime_fact(int n, int guess);

/**
 * is_prime_number - checks for prime number
 *
 * @n: number to be checked
 *
 * Return: 1 if the input is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n < 2) /* if number is less than 2 */
	{
		return (0);
	}
	else /* number is greater than or equal to 2 */
	{
		/* we call func to check for prime factor */
		return (prime_fact(n, n - 1));
	}
}

/**
 * prime_fact - checks for prime factor
 *
 * @n: number to be checked
 * @guess: iterator
 *
 * Return: 1 if n is a prime number, otherwise return 0
 */

int prime_fact(int n, int guess)
{
	if (guess * guess == n) /* if the square of guess is equal to number */
	{
		return (0); /* number is not a prime number */
	}
	else if (guess == 1) /* if guess is 1 */
	{
		return (1); /* number is a prime number */
	}
	guess--; /* decrease guess by 1 */
	return (prime_fact(n, guess)); /* call function again with new guess */
}
