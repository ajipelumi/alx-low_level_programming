#include <string.h>
#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string to be examined
 * @needle: sub-string to be searched in haystack string
 *
 * Return: pointer to the first character of the found needle in haystack
 * otherwise a null pointer if needle is not present in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int count = 0;

	while (*haystack != '\0') /* loop through first string */
	{
		/* loop through sub-string */
		while (*needle != '\0' && *haystack == *needle)
		{
			haystack++; /* calls thr next character */
			needle++; /* calls the next character */
			count++; /* increase count */
		}
		if (!*needle) /* sub-string has been examined and characters found */
		{
			/* return pointer to first character in haystack */
			return (haystack - count);
		}
		haystack++;
	}
	return (NULL); /* return NULL if sub-string not found */
}
