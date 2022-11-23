#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: function input
 *
 * Return: 0
 */

void print_to_98(int n)
{
	int i;

	if (n > 98) /* if n is greater than 98 */
	{
		for (i = n; i > 98; i--) /* loop from n to 98 */
		{
			printf("%d, ", i); /* print i and space */
		}
		printf("%d\n", 98); /* print 98 */
	}
	else if (n < 98) /* if n is less than 98 */
	{
		for (i = n; i < 98; i++) /* loop from n to 98 */
		{
			printf("%d, ", i); /* print i and space */
		}
		printf("%d\n", 98); /* print 98 */
	}
	else /* if n is 98 */
	{
		printf("%d\n", n); /* print 98 */
	}
}
