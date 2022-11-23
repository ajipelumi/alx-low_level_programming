#include <stdio.h>

/**
 * main - main prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z') /* loop through alphabets */
	{
		putchar(i); /* prints alphabet */
		i = i + 1; /* go to next alphabet */
	}
	putchar('\n'); /* print new line */
	return (0);
}
