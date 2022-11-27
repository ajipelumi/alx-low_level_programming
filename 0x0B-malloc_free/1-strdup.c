#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i, len;
	char *ptr;

	if (!str) /* if no string is passed */
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		; /* get string length */
	}
	len = i; /* assign string length to len */
	/* allocate memory for string to be duplicated */
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr) /* if malloc fails */
	{
		free(ptr);
		return (NULL);
	}
	/* loop to duplicate each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0'; /* null terminate the string */
	return (ptr); /* return duplicated string */
}
