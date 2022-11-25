#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len;

	/* loop through destination string */
	for (len = 0; dest[len] != '\0'; len++)
	{
		; /* get length of destination string */
	}
	/* loop through source string */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i]; /* append src to dest */
		len++; /* increases length */
	}
	dest[len] = '\0'; /* null terminate string */
	return (dest); /* return concatenated string */
}
