#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase.
 *
 * Return: 0
 */

int main(void)
{
	char i;
	char j;

	/* loop from 0 to 9 */
	for (i = '0'; i <= '9'; i = i + 1)
	{
		putchar(i); /* prints digit */
	}
	/* loop from 'a' to 'f' */
	for (j = 'a'; j <= 'f'; j = j + 1)
	{
		putchar(j); /* prints alphabet */
	}
	putchar('\n'); /* print newline */
	return (0);
}
