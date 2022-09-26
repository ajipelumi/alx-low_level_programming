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
	char *find;

	find = strstr(haystack, needle);
	return (find);
}
