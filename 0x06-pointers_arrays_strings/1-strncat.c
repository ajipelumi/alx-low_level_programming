#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of src characters to append to dest
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len;

	/* loop through destination string */
	for (len = 0; dest[len] != '\0'; len++)
	{
		; /* get length of destination string */
	}
	/* loop through source string and the number of character to be appended */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len] = src[i]; /* append src to dest */
		len++; /* increases length */
	}
	dest[len] = '\0'; /* null terminate string */
	return (dest); /* return concatenated string */
}
