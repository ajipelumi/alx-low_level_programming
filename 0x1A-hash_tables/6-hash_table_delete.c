#include <stdlib.h>
#include "hash_tables.h"

void free_node(hash_node_t *node);

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;

	if (!ht || !ht->array)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp)
		{
			free_node(temp);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * free_node - deletes a hash node
 *
 * @node: node to be freed
 *
 * Return: void
 */

void free_node(hash_node_t *node)
{
	hash_node_t *temp;

	while (node != NULL)
	{
		temp = node->next;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}
}
