#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 *
 * @head: pointer to the nodes to add
 *
 * Return: the sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
