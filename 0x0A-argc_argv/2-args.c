#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	/* loop through all arguments */
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]); /* print arg (string) one at a time */
	}
	return (0);
}
