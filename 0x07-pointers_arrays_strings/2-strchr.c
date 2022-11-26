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
	while (*s != '\0') /* loop through string */
	{
		if (*s == c) /* if character is located */
		{
			return (s); /* return pointer to character */
		}
		s++;
	}
	if (*s == c) /* if c is terminating null byte */
	{
		return (s); /* return pointer to terminator */
	}
	return (NULL); /* return NULL if character is not found */
}
