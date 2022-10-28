#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: first decimal to be examined
 * @m: second decimal to be examined
 *
 * Return: the number of bits you would need to flip to get
 * from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count = 0;

	xor = n ^ m;
	while (xor != 0)
	{
		if ((xor & 1) == 1)
		{
			count++;
		}
	xor = xor >> 1;
	}
	return (count);
}
