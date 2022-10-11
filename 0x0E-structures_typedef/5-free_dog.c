#include <stdlib>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees dog
 *
 * @d: pointer to struct variable
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
