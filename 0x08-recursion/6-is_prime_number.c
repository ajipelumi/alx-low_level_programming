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
	if (n < 2)
	{
	return (0);
	}
	else
	{
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
	if (guess * guess == n)
	{
	return (0);
	}
	else if (guess == 1)
	{
	return (1);
	}
	guess--;
	return (prime_fact(n, guess));
}
