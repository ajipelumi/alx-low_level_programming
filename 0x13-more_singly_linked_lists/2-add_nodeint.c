#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: pointer to the nodes to add
 * @n: integer to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head != NULL)
	{
		/* allocate memory */
		new = malloc(sizeof(listint_t));
		if (new == NULL) /* if malloc fails */
		{
			return (NULL);
		}
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (*head);
}
