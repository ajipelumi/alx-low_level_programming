#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

char *_strdup(char *str);
unsigned int _strlen(char *str);

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: pointer to the nodes to be added
 * @str: string to be added to nodes
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *ptr;

	if (head != NULL && str != NULL)
	{
		/* allocate memory */
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL) /* if malloc fails */
		{
			return (NULL);
		}
		ptr = (char *)str; /* discards const qualifier from str */
		new_node->str = _strdup(ptr);
		new_node->len = _strlen(ptr);
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i, len;
	char *ptr;

	if (!str) /* if no string is passed */
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		; /* get string length */
	}
	len = i; /* assign string length to len */
	/* allocate memory for string to be duplicated */
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr) /* if malloc fails */
	{
		free(ptr);
		return (NULL);
	}
	/* loop to duplicate each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0'; /* null terminate the string */
	return (ptr); /* return duplicated string */
}

/**
 * _strlen -  returns the length of a string
 *
 * @str: function input
 *
 * Return: string length
 */

unsigned int _strlen(char *str)
{
	unsigned int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		; /* length increases until null character */
	}
	return (len);
}
