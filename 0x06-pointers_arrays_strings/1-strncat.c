#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: second string
 * @src: first string
 * @n: number of src strings to append to dest
 *
 * Return: prints two strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len;
	
	for (len = 0; dest[len] != '\0'; len++)
	{
	
	}
	
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
