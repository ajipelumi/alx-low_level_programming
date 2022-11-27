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
	if (argc != 2) /* if args passed are not exactly 2 */
	{
		printf("Error\n"); /* print error */
		return (1);
	}
	else if (atoi(argv[1]) < 0) /* if digit is a negative integer */
	{
		printf("0\n"); /* print 0 */
	}
	else /* digit is a positive integer */
	{
		minCoins(argv[1]); /* call func to get coin minimun */
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

	int coins[] = {25, 10, 5, 2, 1}; /* coin values */

	len = sizeof(coins) / sizeof(int); /* get array size */
	num = atoi(amount); /* convert string to integer */
	/* loop until end of array */
	for (i = 0; i < len; i++)
	{
		if (num >= coins[i])
		{
			/**
			 * take num = 30, we divide 30 by the first coin value
			 * which is 25 and we get 1. We store 1 (one) as result
			 * and we add it to total. We go on to update num by taking
			 * the remainder (30 - 25) which is 5 and we run the loop
			 * to see if it is equal/greater than the next coin value
			 * which is 10. the next coin value is 5 and is the same value
			 * as updated num so the steps are repeated and total is returned
			 */
			result = num / coins[i];
			num = num - (result * coins[i]);
			total += result;
		}
	}
	printf("%d\n", total); /* print total */
}
