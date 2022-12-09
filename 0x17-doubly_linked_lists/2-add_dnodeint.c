#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: pointer to the list
 * @n: node element
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

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

		if (*head == NULL) /* no list exists */
		{
			*head = new; /* head now points to first node */
			return (*head);
		}
		new->next = *head; /* points to head */
		(*head)->prev = new; /* prev points to new */
		*head = new; /* head now points to new */
	}
	return (new); /* return new node */
}
