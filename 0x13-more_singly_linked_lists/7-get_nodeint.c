#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: pointer to the nodes
 * @index: index of the node, starting at 0
 *
 * Return: the address of the indexed node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;

	if (!(head))
	{
		return (NULL);
	}
	while (head && count <= index)
	{
		temp = head;
		head = temp->next;
		count++;
	}
	if (!(head))
	{
		return (NULL);
	}
	else
	{
		return (temp);
	}
}
