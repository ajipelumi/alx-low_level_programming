#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	else
	{
	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", prod);
	}
	return (0);
}
