#include <string.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: number of characters in the initial segment of s
 * which consist only of characters from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
