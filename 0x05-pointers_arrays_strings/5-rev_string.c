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

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	length = i;
	middle = length / 2;
	for (i = 0; i < middle; i++)
	{
	temp = s[i];
	s[i] = s[length - i - 1];
	s[length - i - 1] = temp;
	}
}
