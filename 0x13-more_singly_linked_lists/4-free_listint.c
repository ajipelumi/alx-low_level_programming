#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: pointer to the nodes to free
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL) /* node exists */
	{
		temp = head; /* head is assigned to temp */
		head = head->next; /* go to the next node */
		free(temp); /* free temp */
	}
	free(head); /* free head */
}
