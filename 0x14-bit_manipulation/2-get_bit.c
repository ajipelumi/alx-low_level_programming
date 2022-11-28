#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: decimal to be examined
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	/**
	 * say index = 3, mask takes 1 to the 3rd index and
	 * the (AND) bitwise operator is used to get the value
	 * of the bit at 3.
	 */
	mask = 1 << index;
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	return ((n & mask) == mask);
}
