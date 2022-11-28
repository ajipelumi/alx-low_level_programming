#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: pointer to the nodes to add
 * @n: integer to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	/* allocate memory */
	new = malloc(sizeof(listint_t));
	if (new == NULL) /* if malloc fails */
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	temp = *head; /* copy address of head to temp */
	if (temp == NULL)
	{
		*head = new; /* add new node at the beginning */
	}
	else
	{
		/* temp goes through list until temp->next is null */
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new; /* temp->next now holds address of new */
	}
	return (*head);
}
