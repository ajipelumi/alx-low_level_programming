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

	if (!str)
	{
	return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{

	}
	len = i;
	if (str == NULL)
	{
	return (NULL);
	}
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len; i++)
	{
	ptr[i] = str[i];
	}
	return (ptr);
}
