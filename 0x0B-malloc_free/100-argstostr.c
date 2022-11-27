#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *ptr = NULL;

	if (ac == 0 || av == NULL) /* if no argument is passed */
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++) /* loop through each args */
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++; /* get string length */
		}
		len++; /* length increases to store newline */
	}
	/* allocate memory to store args passed */
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL) /* if malloc fails */
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++) /* loop through each args */
	{
		/* loop until null byte is met */
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j]; /* store each string */
			k++;
		}
		ptr[k] = '\n'; /* each arg is followed by a newline */
		k++;
	}
	ptr[k] = '\0'; /* null terminate string */
	return (ptr); /* return pointer to string */
}
