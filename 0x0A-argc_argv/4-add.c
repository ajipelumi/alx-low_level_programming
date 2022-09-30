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

	if (argc == 1)
	{
	printf("Error\n");
	return (1);
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
	if (hasDigit(argv[i]) == 0)
	{
	sum += atoi(argv[i]);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	}
	printf("%d\n", sum);
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
