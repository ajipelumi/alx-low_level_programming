#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: pointer to the nodes to delete
 *
 * Return: the head nodes data (n)
 */

int pop_listint(listint_t **head)
{
	int count;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		*head = temp->next;
		count = temp->n;
		free(temp);
	}
	return (count);
}
