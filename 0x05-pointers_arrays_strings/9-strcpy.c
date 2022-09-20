#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: destination character
 * @src: copied character
 *
 * Return: point to dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
