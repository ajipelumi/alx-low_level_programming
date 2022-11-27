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
	char *operator;
	int (*ptr)(int, int);
	int num1;
	int num2;
	int result;

	if (argc != 4) /* if args are not exactly 4 */
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]); /* convert second arg to integer */
	num2 = atoi(argv[3]); /* convert fourth arg to integer */
	operator = argv[2]; /* third arg acts as operator */
	/* check if operator exists and operator entered is expected */
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	/* print error if user tries to divide ('/' or '%') by 0 */
	if ((*operator == 47 || *operator == 37) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	/* call operator function */
	ptr = get_op_func(operator);
	result = ptr(num1, num2);
	printf("%d\n", result); /* print result */
	return (0);
}
