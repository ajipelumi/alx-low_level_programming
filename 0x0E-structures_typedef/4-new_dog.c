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
	int i, len = 0;

	/* loop through string */
	for (i = 0; s[i] != '\0'; i++)
	{
		len++; /* increase count */
	}
	return (len); /* return string length */
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

	/* loop through src */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i]; /* store src in dest */
	}
	dest[i] = '\0'; /* null terminate string */
	return (dest); /* return pointer to string */
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
	dog_t *ptr = NULL;

	/* check if name and owner are a string and age is positive */
	if (name == NULL || age <= 0 || owner == NULL)
	{
		return (NULL);
	}
	/* allocate memory to store struct */
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL) /* if malloc fails */
	{
	return (NULL);
	}
	/* allocate memory to store struct member name */
	ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ptr->name == NULL) /* if malloc fails */
	{
		free(ptr);
		return (NULL);
	}
	/* allocate memory to store struct member owner */
	ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (ptr->owner == NULL) /*if malloc fails */
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->name = _strcpy(ptr->name, name);
	ptr->age = age;
	ptr->owner = _strcpy(ptr->owner, owner);
	return (ptr);
}
