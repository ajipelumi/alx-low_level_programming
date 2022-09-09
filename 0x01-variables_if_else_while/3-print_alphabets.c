#include <stdio.h>
/**
 * main - main
 *
 * Return: 0
 */
	int main(void)
	{
	char i = 'a';

	char j = 'A';

	while (i <= 'z')
	{
	putchar(i);
	i = i + 1;
	}
	while (j <= 'Z')
	{
	putchar(j);
	j = j + 1;
	}
	putchar('\n');
	return (0);
}
