#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: pointer to the nodes to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	/* loop through list */
	while (h != NULL)
	{
		if (h->str == NULL) /* if string is null */
		{
			printf("[%d] (nil)\n", h->len);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next; /* go to the next node */
		count++; /* increase count */
	}
	return (count);
}
