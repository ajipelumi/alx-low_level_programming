#include <ctype.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: checks input of the function
 *
 * Return: 1 if n is > 0, 0 if n is = 0, -1 if n is < 0
 */

int print_sign(int n)
{
	if (n > 0) /* if n is greater than 0 */
	{
		_putchar(43); /* print '+' */
		return (1); /* return 1 */
	}
	else if (n == 0) /* if n is equal to 0 */
	{
		_putchar(48); /* print 0 */
		return (0); /* return 0 */
	}
	else /* if n is less than 0 */
	{
		_putchar(45); /* print '-' */
		return (-1); /* return -1 */
	}
}
