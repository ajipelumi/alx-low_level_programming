#include <stdio.h>
#include "main.h"

int check(const char *b);
unsigned int _strlen(const char *b);
unsigned int _binary(const char *b, unsigned int len);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, dec;

	if (!b)
	{
		return (0); /* if the string is NULL */
	}
	/* call our check function to check the string */
	if (check(b) == (-1))
	{
		return (0); /* if there is any char other than 0 and 1 */
	}
	len = _strlen(b); /* find the length of our string */
	dec = _binary(b, len); /* converts our string to binary */
	return (dec);
}

/**
 * check - checks if there are other characters other than 0 and 1
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: 0 if there are only 0s and 1s, -1 if otherwise
 */

int check(const char *b)
{
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (-1);
		}
	}
	return (0);
}

/**
 * _strlen - the length of a string
 *
 * @b: pointer to a string to be scanned
 *
 * Return: the string length
 */

unsigned int _strlen(const char *b)
{
	unsigned int i, len = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * _binary - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 * @len: string length
 *
 * Return: the converted number
 */

unsigned int _binary(const char *b, unsigned int len)
{
	int i;
	unsigned int sum = 0, decval = 1;

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			sum += decval;
		}
	decval *= 2; /* decimal value multiplies by 2 for every iteration */
	}
	return (sum);
}
