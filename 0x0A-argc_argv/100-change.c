#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void minCoins(char *amount);

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
	printf("0\n");
	}
	else
	{
	minCoins(argv[1]);
	}
	return (0);
}

/**
 * minCoins - checks for digits and returns to main
 *
 * @amount: number to be examined
 *
 * Return: 0
 */

void minCoins(char *amount)
{
	int i, len, num, result, total = 0;

	int coins[] = {25, 10, 5, 2, 1};

	len = sizeof(coins) / sizeof(int);
	num = atoi(amount);
	for (i = 0; i < len; i++)
	{
	if (num >= coins[i])
	{
	result = num / coins[i];
	num = num - (result * coins[i]);
	total += result;
	}
	}
	printf("%d\n", total);
}
