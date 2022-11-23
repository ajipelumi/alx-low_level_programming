#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0
 */

int main(void)
{
	char i = 'a';
	char j = 'A';

	while (i <= 'z') /* loop through alphabets (lowercase) */
	{
		putchar(i); /* print alphabet */
		i = i + 1; /* go to the next alphabet */
	}

	while (j <= 'Z') /* loop through alphabets (uppercase) */
	{
		putchar(j); /* print alphabet */
		j = j + 1; /* go to the next alphabet */
	}
	putchar('\n'); /* print newline */
	return (0);
}
