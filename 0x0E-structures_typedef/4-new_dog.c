#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen -  returns the length of a string
 *
 * @s: function input
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	count++;
	}
	return (count);
}

/**
 * _strcpy -  copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: destination character
 * @src: copied character
 *
 * Return: point to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

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
	dog_t *ptr;

	if (name == NULL || age <= 0 || owner == NULL)
	{
	return (NULL);
	}
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
	return (NULL);
	}
	ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ptr->name == NULL)
	{
	free(ptr);
	return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (ptr->owner == NULL)
	{
	free(ptr->name);
	free(ptr);
	return (NULL);
	}
	ptr->name = _strcpy(ptr->name, name);
	ptr->age = age;
	ptr->owner = _strcpy(ptr->owner, owner);
	return (ptr);
	free(ptr);
}
