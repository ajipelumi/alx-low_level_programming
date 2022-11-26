#include <stdio.h>
#include "main.h"

int _pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0) /* if string is empty */
	{
		return (1); /* it is a palindrome */
	}
	else /* string is not empty */
	{
		/* call function to examine characters and return */
		return (_pal(s, 0, _strlen_recursion(s)));
	}
}

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string to be examined
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') /* if null byte is met */
	{
		return (0);
	}
	else /* null byte is not met */
	{
		/* point to next character and return length */
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * _pal - examines the characters for palindrome
 *
 * @s: string to be examined
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int _pal(char *s, int i, int len)
{
	/**
	 * the first and last characters are going to be compared, if they
	 * are not equal 0 is returned, however, if they are equal, the
	 * the index is increased and the 2nd and 2nd to the last characters
	 * are examined and the loop runs till the index equals the string length
	 */
	if (*(s + i) != *(s + len - 1))
	{
		return (0); /* string is not a palindrome */
	}
	else if (i >= len) /* if index is equal to string length (base condition */
	{
		return (1); /* string is palindrome */
	}
	else
	{
		/* increases index to examine the next characters */
		return (_pal(s, i + 1, len - 1));
	}
}
