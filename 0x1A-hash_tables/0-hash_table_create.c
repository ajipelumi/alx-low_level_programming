#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 *
 * @size: the size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size != 0)
	{
		table = malloc(sizeof(hash_table_t));
		if (table == NULL) /* malloc fails */
		{
			return (NULL);
		}

		table->size = size;
		table->array = NULL;
	}
	return (table);
}
