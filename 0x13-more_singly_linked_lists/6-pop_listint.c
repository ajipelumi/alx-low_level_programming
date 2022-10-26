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
	temp = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = temp;
	return (num);
}
