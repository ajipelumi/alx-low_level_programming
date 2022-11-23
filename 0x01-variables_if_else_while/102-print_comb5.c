#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 99; a++) /* loop through first comb */
	{
		for (b = 1; b < 100; b++) /* loop through second comb */
		{
			if (a != b && a < b) /* comb must be different */
			{
				putchar((a / 10) + '0'); /*print first digit */
				putchar((a % 10) + '0'); /* print second digit */
				putchar(' '); /* print space */
				putchar((b / 10) + '0'); /* print third digit */
				putchar((b % 10) + '0'); /* print fourth digit */
				if (a != 98 || b != 99) /* not last combination */
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
