#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: pointer to the nodes
 *
 * Return: the number of nodes in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL) /* loop through list */
	{
		h = h->next; /* go to the next node */
		count++; /* increase count */
	}
	return (count);
}
