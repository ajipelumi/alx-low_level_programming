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
	int result = strcmp(s1, s2);

	return (result);
}
