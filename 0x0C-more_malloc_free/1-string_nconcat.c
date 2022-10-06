#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: string to be appended
 * @n: number of s2 to be concatenated
 *
 * Return: pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0, len;
	char *ptr;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	len1++;
	}
	for (i = 0; i < n; i++)
	{
	len2++;
	}
	len = len1 + len2;
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
	ptr[i] = s1[i];
	}
	for (j = 0; j < n; i++, j++)
	{
	ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
