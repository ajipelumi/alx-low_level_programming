#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: pointer to the nodes to print
 *
 * Return: the number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
		}

	h = h->next;
	count++;
	}
	return (count);
}