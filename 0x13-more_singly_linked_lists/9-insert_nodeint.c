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

	temp = *head /* store first address */
	/* iterate through nodes till the index nth node */
	for (count = 1; count < idx && head != NULL; count++)
	{
		temp = temp->next;
	}
	new = malloc(sizeof(listint_t)); /* new node */
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	/* return head */
	return (*head);
}
