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
	strncat(dest, src, n);
	return (dest);
}
