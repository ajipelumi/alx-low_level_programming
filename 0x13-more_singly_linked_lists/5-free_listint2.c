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

	if (head == NULL)
	{
		return;
	}
	else
	{
		temp = *head;
		while (temp != NULL)
		{
			new_temp = temp->next;
			free(temp);
			temp = new_temp;
		}
	}
	*head = NULL;
}
