#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0
 */

int main(void)
{
	int i;

	/* loop through single digits */
	for (i = '0'; i <= '9'; i = i + 1)
	{
		putchar(i); /* print digit */
		if (i != '9')
		{
			putchar(','); /* print comma */
			putchar(' '); /* print space */
		}
	}
	putchar('\n'); /* print newline */
	return (0);
}
