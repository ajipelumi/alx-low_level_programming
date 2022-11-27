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
	char *ptr = NULL;

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
		len1++; /* length of first string */
	}
	for (i = 0; i < n; i++)
	{
		len2++; /* length of second string */
	}
	len = len1 + len2; /* add both lengths */
	ptr = malloc(sizeof(char) * len + 1); /* allocate memory */
	if (ptr == NULL) /* if malloc fails */
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++) /* loop through first string */
	{
		ptr[i] = s1[i]; /* store first string */
	}
	for (j = 0; j < n; i++, j++) /* loop until n */
	{
		ptr[i] = s2[j]; /* store second string */
	}
	ptr[i] = '\0'; /* null terminate string */
	return (ptr); /* return pointer to string */
}
