#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	char i = 'z';

	while (i >= 'a') /* loop alphabets in reverse */
	{
		putchar(i); /* prints alphabets */
		i = i - 1; /* go to the next alphabet */
	}
	putchar('\n'); /* print newline */
	return (0);
}
