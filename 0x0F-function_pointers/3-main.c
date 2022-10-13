#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 *
 * @argc: argument counts
 * @argv: argument vector
 *
 * Return: result of the operation
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *operator;
	int result;
	int (*ptr)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
	printf("Error\n");
	exit(99);
	}
	if ((*operator == 47 || *operator == 37) && num2 == 0)
	{
	printf("Error\n");
	exit(100);
	}
	ptr = get_op_func(operator);
	result = ptr(num1, num2);
	printf("%d\n", result);
	return (0);
}
