#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

void handle_collision(hash_node_t **ptr, const char *key, const char *value);

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

	if (ht == NULL || key == NULL || value == NULL)
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
			exit(EXIT_FAILURE);
		}
		ptr->key = strdup(key);
		ptr->value = strdup(value);
		ptr->next = NULL;
		ht->array[index] = ptr; /* index now points to first node */
		return (1);
	}
	else
	{
		/* key needs to be updated */
		if (strcmp(ptr->key, key) == 0)
		{
			strcpy(ptr->value, value);
			return (1);
		}
		else /* collision occurs */
		{
			/* call function to handle collision */
			handle_collision(&ptr, key, value);
			ht->array[index] = ptr; /* index now points to new node */
			return (1);
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
 * Return: void
 */


void handle_collision(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *node = NULL;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL) /* malloc fails */
	{
		exit(EXIT_FAILURE);
	}

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = *head; /* new node points to head node */
	*head = node; /* head now points to new node */
}
