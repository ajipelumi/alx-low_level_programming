#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy -  copies n number of characters pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: destination character
 * @src: copied character
 * @n: number of src characters to be copied
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* loop to copy the first n bytes of source string */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i]; /* store src in dest */
	}
	dest[i] = '\0'; /* null terminate string */
	return (dest); /* return copied string */
}
