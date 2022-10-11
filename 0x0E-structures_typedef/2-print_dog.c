#include <stdlib>
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
	if (d == NULL)
	{
	exit(1);
	}
	if (d->name == NULL)
	{
	d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
	d->owner = "(nil)";
	}
	if (!(d->age))
	{
	printf("Name: %s\n Age: (nil)\n Owner: %s\n", d->name, d->owner);
	exit(0);
	}
	printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
}
