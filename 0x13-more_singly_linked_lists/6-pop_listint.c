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
	int num;
	listint_t *temp;

	if (!head || !*head)
	{
		return (0);
	}
	temp = *head; /* the address of head is assigned to temp */
	*head = temp->next; /* points to the next node */
	num = temp->n;
	free(temp); /* free temp */
	return (num);
}
