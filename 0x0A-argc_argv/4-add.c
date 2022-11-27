#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int hasDigit(char *s);

/**
 * main - adds positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1) /* if only one argument is passed */
	{
		printf("0\n"); /* print 0 and newline */
	}
	else /* more than 1 arg is passed */
	{
		/* index starts from the second arg until arg count */
		for (i = 1; i < argc; i++)
		{
			/* check if our string has a digit */
			if (hasDigit(argv[i]) == 0)
			{
				/* convert string to integer and add to sum */
				sum += atoi(argv[i]);
			}
			else /* digit does not exist */
			{
				printf("Error\n"); /* print error and newline */
				return (1);
			}
		}
		printf("%d\n", sum); /* print sum and newline */
	}
	return (0);
}

/**
 * hasDigit - checks for digits and returns to main
 *
 * @s: string which is argument vector
 *
 * Return: 0
 */

int hasDigit(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
	if (!isdigit(s[i]))
	{
	return (1);
	}
	}
	return (0);
}
