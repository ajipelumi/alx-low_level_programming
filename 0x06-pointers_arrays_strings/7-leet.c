#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: string to be modified
 *
 * Return: modified string
 */

char *leet(char *str)
{
	int i, c = 0;
	int low[] = {97, 101, 111, 116, 108}; /* lowercase */
	int cap[] = {65, 69, 79, 84, 76}; /* uppercase */
	int n[] = {52, 51, 48, 55, 49}; /* replacement */

	while (str[c] != '\0') /* loop through string */
	{
		/* loop through lowercase and uppercase elements */
		for (i = 0; i < 5; i++)
		{
			/* if a lowercase or uppercase element is met */
			if (str[c] == low[i] || str[c] == cap[i])
			{
				str[c] = n[i]; /* apply replacement */
				break; /* exit loop */
			}
		}
		c++;
	}
	return (str); /* return modified string */
}
