#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the number of elements in a linked listint_t list
 *
 * @h: pointer to the nodes
 *
 * Return: the number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	/* loop through list */
	while (h != NULL)
	{
		h = h->next; /* go to the next node */
		count++; /* increase count */
	}
	return (count);
}
