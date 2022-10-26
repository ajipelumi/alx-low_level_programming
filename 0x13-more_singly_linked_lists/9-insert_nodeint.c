#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to the nodes
 * @idx: index of the list where the new node should
 * be added. Index starts at 0
 * @n: member of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i;

	if (*head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head; /* store first node */
	for (i = 0; i < (idx - 1) && *head; i++)
	{
		temp = temp->next;
		if (!temp || !(temp->next))
		{
			return (NULL);
		}
	}
	new->next = temp->next; /* link temp->next node after new node */
	temp->next = new; /* link the previous node to new node */
	return (new);
}
