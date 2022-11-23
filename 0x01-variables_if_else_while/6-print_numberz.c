#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 *
 * Return: 0
 */

int main(void)
{
	int i;

	/* loop from 0 to 9 */
	for (i = '0'; i <= '9'; i = i + 1)
	{
		putchar(i); /* print digit */
	}
	putchar('\n'); /* print newline */
	return (0);
}
