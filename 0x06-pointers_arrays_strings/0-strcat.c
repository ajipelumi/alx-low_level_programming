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
	strcat(dest, src);
	return (dest);
}
