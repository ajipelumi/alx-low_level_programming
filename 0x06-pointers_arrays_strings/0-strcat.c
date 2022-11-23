#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: second string
 * @src: first string
 *
 * Return: prints two strings
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len;
	
	for (len = 0; dest[len] != '\0'; len++)
	{
	
	}
	
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
