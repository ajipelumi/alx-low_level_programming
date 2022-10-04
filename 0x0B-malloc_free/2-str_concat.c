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
	int len, len1, len2;
	char *ptr;

	if (!s1 || !s2)
	{
	return (0);
	}
	len1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{

	}
	len1 = i;
	len2 = 0;
	for (i = 0; s2[i] != '\0'; i++)
	{

	}
	len2 = 1;
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
