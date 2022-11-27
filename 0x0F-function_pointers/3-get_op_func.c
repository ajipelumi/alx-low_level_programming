#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user
 *
 * @s: operator passed as argument to the program
 *
 * Return: pointer to the function that corresponds
 * to the operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	/* initialize struct */
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	/* iterate through struct */
	while (i < 5)
	{
		/* if operator matches */
		if (*s == *ops[i].op)
		{
			/* call corresponding function */
			return (ops[i].f);
		}
		i++; /* check the next operator */
	}
	return (NULL); /* operator does not match the expected operators */
}
