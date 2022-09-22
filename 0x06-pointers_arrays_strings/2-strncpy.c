#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy -  copies n number of string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: destination character
 * @src: copied character
 * @n: number of src strings to be copied
 *
 * Return: point to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
