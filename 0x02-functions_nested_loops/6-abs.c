#include <stdlib.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @i: takes the function input
 *
 * Return: 0
 */
int _abs(int i)
{
	if (i < 0)
	{
	i = i * (-1);
	}
	return (i);
}
