#include <stdio.h>

/**
 * main - prints all possible combinations of three digit
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++) /* loop through first comb */
	{
		for (b = 1; b < 9; b++) /* loop through second comb */
		{
			for (c = 2; c < 10; c++) /* loop through third comb */
			{
				/* three combinations must be different */
				if (a != b && a < b && b != c && b < c)
				{
					putchar(a + '0'); /* print first comb */
					putchar(b + '0'); /* print second comb */
					putchar(c + '0'); /* print third comb */
					if (a != 7 || b != 8 || c != 9) /* if not last comb */
					{
						putchar(','); /* print comma */
						putchar(' '); /* print space */
					}
				}
			}
		}
	}
	putchar('\n'); /* print newline */
	return (0);
}
