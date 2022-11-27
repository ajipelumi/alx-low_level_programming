#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: number of memory to be allocated
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = NULL;

	ptr = malloc(b); /* allocate memory */
	if (ptr == NULL) /* if malloc fails */
	{
		exit(98);
	}
	return (ptr); /* return pointer to allocated memory */
}
