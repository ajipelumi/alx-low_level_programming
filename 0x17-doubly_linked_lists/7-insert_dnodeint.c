#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: pointer to the list
 * @idx: the index of the list where the new node should be added
 * @n: node element
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *temp;
	unsigned int i;

	if (*h == NULL)
	{
		return (NULL);
	}
	/* allocate memory */
	new = malloc(sizeof(dlistint_t));
	if (!new) /* if malloc fails */
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0) /* first index */
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	temp = *h; /* store first node */
	for (i = 0; i < (idx - 1) && *h; i++) /* go to index */
	{
		temp = temp->next; /* temp points to the next node */
		//if (!temp || !(temp->next))
		//{
		//	return (NULL);
		//}
	}
	new->next = temp->next; /* new next now points to temp next */
	temp->next->prev = new; /* temp next prev now points to new */
	temp->next = new; /* temp next now points to new */
	new->prev = temp; /* new prev now points temp */
	return (new);
}
