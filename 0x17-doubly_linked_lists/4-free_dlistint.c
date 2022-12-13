#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: pointer to the list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL) /* loop through list */
	{
		temp = head;
		head = head->next; /* go to the next node */
		free(temp); /* free temp */
	}
	free(head); /* free head */
}
