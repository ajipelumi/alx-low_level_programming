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

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
