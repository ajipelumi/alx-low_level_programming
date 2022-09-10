#include <stdio.h>
/**
 * main - main prints all possible combinations of single-digit numbers.
 *
 * Return: 0
 */
	int main(void)
	{
	char i;

	for (i = '0'; i <= '9'; i = i + 1)
	{
	putchar(i);
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
