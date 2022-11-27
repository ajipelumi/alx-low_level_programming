#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char __attribute__((unused))*argv[])
{
	int i, n;

	/* loop until argument count */
	for (i = 0; i < argc; i++)
	{
		n = i;
	}
	printf("%d\n", n); /* print number of arg (strings) passed */
	return (0);
}
