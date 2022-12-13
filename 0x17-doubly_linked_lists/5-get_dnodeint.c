#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a dlistint_t linked list
 *
 * @head: pointer to the list
 * @index: the index of the node, starting from 0
 *
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head != NULL)
	{
		/* go through list until null */
		while (head != NULL)
		{
			if (count == index) /* index is met */
			{
				temp = head; /* copy address of head to temp */
				return (temp); /* return the node at index */
			}
			count++; /* increase count */
			head = head->next; /* go to the next node */
		}
	}
	return (NULL);
}
