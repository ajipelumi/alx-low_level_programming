#include <string.h>
#include "main.h"

/**
 * rev_string - prints a string, in reverse, followed by a new line
 *
 * @s: function input
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, length, middle;
	char temp;

	/* loop through string */
	for (i = 0; s[i] != '\0'; i++)
	{
		; /* gets the length of string */
	}
	length = i; /* assign string length to length */
	middle = length / 2; /* divide by 2 to get middle */
	for (i = 0; i < middle; i++) /* iterate through half of the string */
	{
		temp = s[i]; /* store first character */
		s[i] = s[length - i - 1]; /* store last character minus null byte */
		s[length - i - 1] = temp; /* first character becomes last character */
	}
}
