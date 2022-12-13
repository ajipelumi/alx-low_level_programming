#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: pointer to the list
 * @n: node element
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *temp;

	if (head !=  NULL)
	{
		/* allocate memory */
		new = malloc(sizeof(dlistint_t));
		if (new == NULL) /* if malloc fails */
		{
			return (NULL);
		}
		new->n = n; /* assign struct element */
		new->next = NULL;
		new->prev = NULL;

		temp = *head; /* copy address of head to temp */
		if (temp == NULL) /* no list exists */
		{
			*head = new; /* head now points to first node */
			return (*head);
		}
		/* temp goes through list until temp->next is null */
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new; /* temp'/'*head points to new */
		new->prev = temp; /* prev points to temp'/'*head */
	}
	return (new); /* return new node */
}
