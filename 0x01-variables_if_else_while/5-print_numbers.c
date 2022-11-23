#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10) /* loop from 0 to 10 */
	{
		printf("%d", i); /* print digit */
		i = i + 1; /* go to the next digit */
	}
	printf("\n"); /* print newline */
	return (0);
}
