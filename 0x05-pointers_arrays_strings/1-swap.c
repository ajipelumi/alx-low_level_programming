#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: first function input
 * @b: second function input
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap = *a; /* swap holds the value of a */
	*a = *b; /* a now holds the value of b */
	*b = swap; /* b now holds the value of a */
}
