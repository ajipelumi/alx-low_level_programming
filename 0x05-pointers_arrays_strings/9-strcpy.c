#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: destination string
 * @src: copied string
 *
 * Return: point to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	/* loop through source string */
	for (len = 0; src[len] != '\0'; len++)
	{
		; /* get string length */
	}
	/* loop to store source string */
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i]; /* store src in dest */
	}
	dest[i] = '\0'; /* null terminate string */
	return (dest);
}
