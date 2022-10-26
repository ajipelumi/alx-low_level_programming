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
	temp = *head;
	*head = temp->next;
	num = temp->n;
	free(temp);
	return (num);
}
