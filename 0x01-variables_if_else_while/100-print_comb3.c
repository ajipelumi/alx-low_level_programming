#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++) /* loop through first comb */
	{
		for (b = 1; b < 10; b++) /* loop through second comb */
		{
			/* if no same combination and smallest combination */
			if (a != b && a < b)
			{
				putchar(a + '0'); /* print first comb */
				putchar(b + '0'); /* print second comb */
				if (a != 8 || b != 9) /* if not last comb */
				{
					putchar(','); /* print comma */
					putchar(' '); /* print space */
				}
			}
		}
	}
	putchar('\n'); /* print newline */
	return (0);
}
