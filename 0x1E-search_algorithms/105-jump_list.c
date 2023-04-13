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

	if (list == NULL) /* list is null */
	{
		return (NULL);
	}

	start = 0;
	end = sqrt(size);
	temp = list;

	/* call jump to execute jump search */
	jump(temp, &start, &end, size, value);

	/* adjust end if it isn't less than size */
	end = (end < size) ? end : size - 1;
	printf("Value found between indexes [%d] and [%d]\n", (int)start, (int)end);

	/* get node at start index to begin printing */
	temp = getNode(list, start);
	for (i = start; i <= end && temp; i++)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)i, temp->n);
		/* if value is found */
		if ((int)temp->n == value)
		{
			return (temp); /* return pointer to found value */
		}
		temp = temp->next;
	}
	return (NULL); /* value is not found */
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
	while (temp) /* traverse through list */
	{
		if (temp->index == *end) /* check index at jump */
		{
			printf("Value checked at index [%d] = [%d]\n", (int)*end, temp->n);
			if ((int)temp->n > value) /* break if node at index is greater */
			{
				break;
			}
			else /* adjust start and end if node at index is less */
			{
				*start = *end;
				*end += sqrt(size);
				if (*start >= size)
				{
					return;
				}
			}
		}
		if (temp->next == NULL) /* handle end of list */
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

	while (node) /* traverse through node */
	{
		if (node->index == start) /* if index is met */
		{
			return (node); /* return node at start */
		}
		node = node->next;
	}
	return (NULL); /* return null otherwise */
}
