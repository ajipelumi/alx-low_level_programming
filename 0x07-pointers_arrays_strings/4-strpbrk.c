#include <string.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: pointer to the character in the initial segment of s
 * which consist only of characters from accept
 */

char *_strpbrk(char *s, char *accept)
{
	char *r;

	r = strpbrk(s, accept);
	return (r);
}
