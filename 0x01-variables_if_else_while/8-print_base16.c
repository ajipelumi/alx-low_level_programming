#include <stdio.h>
/**
 * main - main prints all the numbers of base 16 in lowercase.
 *
 * Return: 0
 */
	int main(void)
	{
	char i;
	char j;

	for (i = '0'; i <= '9'; i = i + 1)
	{
	putchar(i);
	}
	for (j = 'a'; j <= 'f'; j = j + 1)
	{
	putchar(j);
	}
	putchar('\n');
	return (0);
}
