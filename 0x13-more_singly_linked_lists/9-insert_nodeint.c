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
	unsigned int i = 0;

	temp = *head; /* store first node */
	while (temp && i < (idx - 1)) /* iterate list to node position index - 2 */
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
		i++;
	}
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = temp->next; /* link temp->next node after new node */
	temp->next = new; /* link the previous node to new node */
	return (new);
}
