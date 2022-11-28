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
	int sum = 0;

	/* loop through linked list */
	while (head != NULL)
	{
		sum += head->n; /* add n to sum */
		head = head->next; /* go to the next node */
	}
	return (sum);
}
