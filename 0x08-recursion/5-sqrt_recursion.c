#include <stdio.h>
#include "main.h"

/**
 * _sqrt_fact - finds the square root factor
 *
 * @n: number to be scanned
 * @guess: starts from 1
 *
 * Return: to the _sqrt_recursion function
 */

int _sqrt_fact(int n, int guess)
{
	/* we start guessing from 1 */
	if (guess * guess == n) /* if the square of guess is equal to number */
	{
		return (guess); /* return our guess number */
	}
	if (guess > n) /* if guess number is greater than number */
	{
		return (-1);
	}
	guess++; /* increase guess by 1 */
	return (_sqrt_fact(n, guess)); /* call function again with new guess */
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to be scanned
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0) /* if number is less than 0 */
	{
		return (-1);
	}
	else /* number is greater than or equal to 0 */
	{
		/* we call func to get the root number */
		return (_sqrt_fact(n, 1)); /* return square root */
	}
}
