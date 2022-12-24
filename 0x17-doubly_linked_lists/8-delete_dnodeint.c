#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 *
 * @head: pointer to the list
 * @index: the index of the list where the node should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *node;
	unsigned int i;

	if (*head == NULL) /* list is empty */
	{
		return (-1);
	}

	temp = *head; /* store first node */
	if (index == 0) /* first node is to be deleted */
	{
		*head = temp->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; i < (index - 1) && temp != NULL; i++) /* go to index */
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL) /* index is out of range */
	{
		return (-1);
	}

	node = temp->next; /* index to be deleted */
	temp->next = node->next;
	if (node->next != NULL)
	{
		node->next->prev = temp;
	}
	free(node);
	return (1);
}
