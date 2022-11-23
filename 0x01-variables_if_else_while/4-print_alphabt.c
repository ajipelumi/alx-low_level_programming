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
		if (i == 'e' || i == 'q') /* if 'e' or 'q' is met */
		{
			i = i + 1; /* go to the next alphabet */
		}
		else
		{
			putchar(i); /* prints alphabet */
			i = i + 1; /* go to the next alphabet */
		}
	}
	putchar('\n'); /* print newline */
	return (0);
}
