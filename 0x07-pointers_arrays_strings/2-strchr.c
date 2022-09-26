#include <string.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: destination area
 * @c: memory area to be copied
 *
 * Return: pointer first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	char *find;

	find = strchr(s, c);
	return (find);
}
