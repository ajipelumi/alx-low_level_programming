#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to the nodes
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL) /* node exists */
	{
		temp = head; /* head is assigned to temp */
		head = head->next; /* go to the next node */
		free(temp->str); /* free allocated memory */
		free(temp); /* free temp */
	}
	free(head); /* free head */
}
