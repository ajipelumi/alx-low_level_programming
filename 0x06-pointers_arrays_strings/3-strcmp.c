#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp -  compares two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if equal, >0 if s1 > s2, <0 if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int flag = 0;

	while (flag == 0)
	{
		if (s1[i] > s2[i])
		{
			flag = 1;	
		}
		else if (s1[i] < s2[i])
		{
			flag = -1;	
		}
		if (s1[i] == '\0')
		{
			break;	
		}
		i++;
	}
	return (flag);
}
