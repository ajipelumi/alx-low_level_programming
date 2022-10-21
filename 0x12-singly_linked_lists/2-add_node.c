#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

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
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		ptr = (char *)str; /* discards const qualifier from str */
		new_node->str = strdup(ptr);
		new_node->len = _strlen(ptr);
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
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
		/* length increases until null character */
	}
	return (len);
}
