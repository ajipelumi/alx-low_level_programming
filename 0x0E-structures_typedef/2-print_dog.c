#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: pointer to struct variable
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL) /* if pointer isn't null */
	{
		printf("Name: ");
		/* if name is null, print nil otherwise print name */
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		 /* if owner is null, print nil otherwise print owner */
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
