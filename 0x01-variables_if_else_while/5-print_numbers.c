#include <stdio.h>
/**
 * main - main prints all single digit numbers of base 10 starting from 0.
 *
 * Return: 0
 */
	int main(void)
	{
		int i = 0;

		while (i < 10)
		{
		printf("%d", i);
		i = i + 1;
		}
		printf("\n");
		return (0);
	}
