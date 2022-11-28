#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: pointer to the nodes to free
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *new_temp;

	if (head == NULL) /* if head points to nothing */
	{
		return;
	}
	else /* head points to nodes */
	{
		temp = *head; /* the address of head is assigned to temp */
		/* loop through temp */
		while (temp != NULL)
		{
			new_temp = temp->next; /* next node is assigned to new temp */
			free(temp); /* free temp */
			temp = new_temp; /* temp now points to next node */
		}
	}
	*head = NULL; /* head points to nothing */
}
