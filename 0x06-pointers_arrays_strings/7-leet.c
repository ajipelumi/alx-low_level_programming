#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: string character
 *
 * Return: string character
 */

char *leet(char *str)
{
	int i, c = 0;
	int low[] = {97, 101, 111, 116, 108};
	int cap[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (str[c] != '\0')
	{
	for (i = 0; i < 5; i++)
	{
	if (str[c] == low[i] || str[c] == cap[i])
	{
	str[c] = n[i];
	break;
	}
	}
	c++;
	}
	return (str);
}
