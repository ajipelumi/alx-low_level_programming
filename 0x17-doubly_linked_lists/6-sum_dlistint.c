#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 *
 * @head: pointer to the list
 *
 * Return: the sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		/* go through list until null */
		while (head != NULL)
		{
			sum += head->n; /* increase sum */
			head = head->next; /* go to the next node */
		}
	}
	return (sum);
}
