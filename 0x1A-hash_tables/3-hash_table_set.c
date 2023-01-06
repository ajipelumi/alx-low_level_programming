#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

int handle_collision(hash_node_t **ptr, const char *key, const char *value);

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: hash table you want to add or update the key/value to
 * @key: key to be indexed
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ptr;
	unsigned long int hash, index;

	if (ht == NULL ||  ht->array == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	if (strlen(key) == 0) /* empty key */
	{
		return (0);
	}

	hash = hash_djb2((const unsigned char *)key); /* generate hash value */
	index = hash % ht->size; /* retrieve index */

	if (ht->array[index] == NULL) /* no item at index */
	{
		ptr = malloc(sizeof(hash_node_t));
		if (ptr == NULL) /* malloc fails */
		{
			return (0);
		}
		ptr->key = strdup(key);
		if (ptr->key == NULL)
		{
			free(ptr);
			return (0);
		}
		ptr->value = strdup(value);
		if (ptr->value == NULL)
		{
			free(ptr);
			return (0);
		}
		ptr->next = NULL;
		ht->array[index] = ptr; /* index now points to first node */
		return (1);
	}
	else
	{
		/* key needs to be updated */
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			if (ptr->value == NULL)
			{
				free(ptr);
				return (0);
			}
			return (1);
		}
		else /* collision occurs */
		{
			/* call function to handle collision */
			if (handle_collision(&ptr, key, value) == 1)
			{
				ht->array[index] = ptr; /* index now points to new node */
				return (1);
			}
		}
	}
	return (0);
}

/**
 * handle_collision - handles collision and creates a linked list.
 *
 * @head: pointer to the node at index position
 * @key: key to be add
 * @value: value associated with the key
 *
 * Return: 1 on success, 0 on failure
 */


int handle_collision(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *node = NULL;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL) /* malloc fails */
	{
		return (0);
	}

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node);
		return (0);
	}
	node->next = *head; /* new node points to head node */
	*head = node; /* head now points to new node */
	return (1);
}
