#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL) /* loop through list */
	{
		printf("%d\n", h->n); /* print element */
		count++; /* increase count */
		h = h->next; /* go to the next node */
	}
	return (count); /* return number of nodes */
}
