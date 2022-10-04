#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string with both s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len, len1 = 0, len2 = 0;
	char *ptr;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	else
	{
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	len1 = i;
	for (i = 0; s2[i] != '\0'; i++)
	{
	}
	len2 = i;
	}
	len = len1 + len2;
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
	{
	return (0);
	}
	for (i = 0; s1[i]; i++)
	{
	ptr[i] = s1[i];
	}
	for (j = 0; s2[j]; i++, j++)
	{
	ptr[i] = s2[j];
	}
	return (ptr);
}
