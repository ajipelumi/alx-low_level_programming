#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 *
 * @array: array
 * @size: size of the array
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		/* loop until end of array */
		for (i = 0; i < size; i++)
		{
			/* call function to be executed */
			action(array[i]);
		}
	}
}
