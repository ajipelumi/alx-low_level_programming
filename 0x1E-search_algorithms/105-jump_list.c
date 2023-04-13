#include "search_algos.h"

void jump(listint_t *temp, size_t *start, size_t *end, size_t size, int value);
listint_t *getNode(listint_t *list, size_t start);

/**
 * jump_list - searches for a value in a sorted list
 * @list: a pointer to the head of list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 *
 * Return: a pointer to first node where value is located
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp;
	size_t i, start, end;

	if (list == NULL)
	{
		return (NULL);
	}

	start = 0;
	end = sqrt(size);
	temp = list;

	jump(temp, &start, &end, size, value);

	end = (end < size) ? end : size - 1;
	printf("Value found between indexes [%d] and [%d]\n", (int)start, (int)end);

	temp = getNode(list, start);
	for (i = start; i <= end && temp; i++)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)i, temp->n);
		if ((int)temp->n == value)
		{
			return (temp);
		}
		temp = temp->next;
	}
	return (NULL);
}


/**
 * jump - executes the jump search
 * @temp: pointer to the head of list to traverse
 * @start: pointer to starting index
 * @end: pointer to last index
 * @size: size of list
 * @value: value to search
 *
 * Return: void
 */

void jump(listint_t *temp, size_t *start, size_t *end, size_t size, int value)
{
	while (temp)
	{
		if (temp->index == *end)
		{
			printf("Value checked at index [%d] = [%d]\n", (int)*end, temp->n);
			if ((int)temp->n > value)
			{
				break;
			}
			else
			{
				*start = *end;
				*end += sqrt(size);
				if (*start >= size)
				{
					return;
				}
			}
		}
		if (temp->next == NULL)
		{
			printf("Value checked at index [%d] = [%d]\n", (int)(size - 1), temp->n);
		}
		temp = temp->next;
	}
}

/**
 * getNode - gets the node at a given index
 * @list: pointer to the head of list to traverse
 * @start: index to match
 *
 * Return: a pointer to the given index
 */

listint_t *getNode(listint_t *list, size_t start)
{
	listint_t *node = list;

	while (node)
	{
		if (node->index == start)
		{
			return (node);
		}
		node = node->next;
	}
	return (NULL);
}
