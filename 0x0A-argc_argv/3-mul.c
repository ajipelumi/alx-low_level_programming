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

	if (argc != 3) /* if args passed are not exactly 3 */
	{
		printf("Error\n"); /* print error */
		return (1);
	}
	else /* arguments passed are exactly 3 in number */
	{
		/* atoi converts string to integer */
		prod = atoi(argv[1]) * atoi(argv[2]); /* get their product */
		printf("%d\n", prod); /* print product */
	}
	return (0);
}
