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
	int i, j;
	unsigned int count = 0;

	/* loop until substring */
	for (i = 0; s[i] != ' '; i++) /* space terminates substring */
	{
		/* loop through string to be matched */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j]) /* if there is a match */
			{
				count++; /* increase count */
			}
		}
	}
	return (count); /* return count */
}
