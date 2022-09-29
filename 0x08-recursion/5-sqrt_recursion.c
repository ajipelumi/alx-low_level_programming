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
	if (guess * guess == n)
	{
	return (guess);
	}
	if (guess > n)
	{
	return (-1);
	}
	guess++;
	return (_sqrt_fact(n, guess));
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
	if (n < 0)
	{
	return (-1);
	}
	else
	{
	return (_sqrt_fact(n, 1));
	}
}
