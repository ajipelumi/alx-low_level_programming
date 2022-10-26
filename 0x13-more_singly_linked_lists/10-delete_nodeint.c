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
	if (index == 0)
	{
		new = (*head)->next;
		if (!new)
		{
			return (-1);
		}
		free(*head);
		*head = new;
		return (1);
	}
	temp = *head;
	for (i = 0; i < (index - 1) && *head; i++)
	{
		temp = temp->next;
	}
	new = temp->next;
	if (!new)
	{
		return (-1);
	}
	temp->next = new->next;
	free(new);
	return (1);
}
