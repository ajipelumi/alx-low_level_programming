#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer to struct variable
 * @name: pointer to the character member "name"
 * @age: age member of the struct, holds a float value
 * @owner: pointer to the character member "owner"
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
