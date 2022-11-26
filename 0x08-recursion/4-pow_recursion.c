#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: base number
 * @y: power
 *
 * Return: x raised to power y
 */

int _pow_recursion(int x, int y)
{
	int expo;

	if (y < 0) /* if power is less than 0 */
	{
		return (-1);
	}
	else if (y == 0) /* if power is 0 */
	{
		return (1);
	}
	else /* power is greater than 0 */
	{
		/* expo is updated everytime the function returns until 0 is met */
		expo = x * _pow_recursion(x, (y - 1)); /* power decreases by 1 */
		return (expo); /* returns the value of x raised to the power of y */
	}
}
