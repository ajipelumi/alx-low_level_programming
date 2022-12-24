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

	/* allocate memory */
	new = malloc(sizeof(dlistint_t));
	if (!new) /* if malloc fails */
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*h == NULL) /* list is empty */
	{
		*h = new;
		return (*h);
	}
	temp = *h; /* store first node */
	while (idx > 1) /* go to index */
	{
		if (temp)
		{
			temp = temp->next; /* temp points to the next node */
		}
		else
		{
			break;
		}
		idx--;
	}

	new->next = temp->next; /* new next now points to temp next */
	new->prev = temp; /* new prev now points temp */
	temp->next->prev = new; /* temp next prev now points to new */
	temp->next = new; /* temp next now points to new */
	return (new);
}
