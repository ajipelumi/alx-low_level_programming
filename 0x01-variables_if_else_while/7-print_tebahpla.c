#include <stdio.h>
/**
 * main - main prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0
 */
	int main(void)
	{
	char i = 'z';

	while (i >= 'a')
	{
	putchar(i);
	i = i - 1;
	}
	putchar('\n');
	return (0);
}
