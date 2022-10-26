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
	unsigned int count;
	listint_t *new, *temp;

	temp = *head; /* store first node */

	new = malloc(sizeof(listint_t));
	if ((!(*head) && idx != 0) || !new)
	{
		return (NULL);
	}
	new->n = n;
	/* iterate list to node position index - 2 */
	for (count = 0; count < (idx - 1) && head; count++)
	{
		temp = temp->next;
		if (!temp)
		{
			return (NULL);
		}
	}
	if (idx == 0) /* if the index for new is 0 */
	{
		new->next = *head; /* move first node to second node*/
		*head = new; /* head now points to new */
	}
	else if (temp->next) /* if the index for new is not 0 */
	{
		new->next = temp->next; /* link temp->next node after new node */
		temp->next = new; /* link the previous node to new node */
	}
	else /* if the index is not present in the list */
	{
		new->next = NULL; /* next address bcomes NULL */
		temp->next = new; /* link previous node to new node */
	}
	return (new);
}
