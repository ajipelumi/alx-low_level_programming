#include <stdlib.h>
#include "hash_tables.h"

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

	for (i = 0; i < ht->size; i++) /* loop through table */
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				free(temp->key);
				free(temp->value);
				temp = temp->next;
			}
		}
		free(ht->array[i]);
	}
	free(ht);
}
