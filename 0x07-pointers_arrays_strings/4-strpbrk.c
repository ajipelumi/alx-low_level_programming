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
	int i, j;

	i = 0;
	while (s[i] != '\0') /* loop through first string */
	{
		j = 0;
		while (accept[j] != '\0') /* loop through string to be matched */
		{
			if (s[i] == accept[j]) /* if a byte is located */
			{
				return (s + i); /* return pointer to byte */
			}
			j++;
		}
		i++;
	}
	return (NULL); /* return NULL if no byte is found */
}
