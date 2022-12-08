#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - return the number of elements in a linked dlistint_t list
 *
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL) /* loop through list */
	{
		count++; /* increase count */
		h = h->next; /* go to the next node */
	}
	return (count); /* return number of nodes */
}
