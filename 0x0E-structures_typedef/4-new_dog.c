#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: pointer to the character member "name"
 * @age: age member of the struct, holds a float value
 * @owner: pointer to the character member "owner"
 *
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, name_len, owner_len;
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
	return (NULL);
	}
	ptr->age = age;
	for (i = 0; name[i] != '\0'; i++)
	{
	name_len++;
	}
	ptr->name = malloc(sizeof(char) * name_len);
	if (ptr->name == NULL)
	{
	return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
	owner_len++;
	}
	ptr->owner = malloc(sizeof(char) * owner_len);
	if (ptr->owner == NULL)
	{
	return (NULL);
	}
}
