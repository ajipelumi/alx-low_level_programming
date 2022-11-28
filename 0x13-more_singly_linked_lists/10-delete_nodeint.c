#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 *
 * @head: pointer to the nodes
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *new;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0) /* first index */
	{
		new = (*head)->next; /* new points to the next node */
		if (!new)
		{
			return (-1);
		}
		free(*head); /* free head */
		*head = new; /* head takes new pointer */
		return (1);
	}
	temp = *head; /* store first node */
	for (i = 0; i < (index - 1) && *head; i++) /* go to index */
	{
		temp = temp->next; /* temp points to the next node */
		if (!temp || !(temp->next))
		{
			return (-1);
		}
	}
	new = temp->next; /* new points to the next node */
	if (!new)
	{
		return (-1);
	}
	temp->next = new->next; /* link previous node to next node */
	free(new); /* free new */
	return (1);
}
