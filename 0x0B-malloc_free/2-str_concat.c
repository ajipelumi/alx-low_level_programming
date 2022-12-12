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
	char *ptr = NULL;
	int i, j;
	int len, len1 = 0, len2 = 0;

	if (s1 == NULL) /* if first string is empty */
	{
		s1 = "";
	}
	if (s2 == NULL) /* if second string is empty */
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	len1 = i; /* length of first string */
	for (i = 0; s2[i] != '\0'; i++)
	{
	}
	len2 = i; /* length of second string */
	len = len1 + len2; /* add both lengths */
	ptr = malloc(sizeof(char) * len + 1); /* allocate memory */
	if (ptr == NULL) /* if malloc fails */
	{
		return (0);
	}
	for (i = 0; s1[i]; i++) /* loop through first string */
	{
		ptr[i] = s1[i]; /* store first string */
	}
	for (j = 0; s2[j]; i++, j++) /* loop through second string */
	{
		ptr[i] = s2[j]; /* store first string */
	}
	ptr[i] = '\0'; /* null terminate string */
	return (ptr); /* return pointer to string */
}
