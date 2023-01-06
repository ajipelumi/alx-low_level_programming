#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: the hash table to look into
 * @key: key to look for
 *
 * Return: the value associated with the element, or NULL
 * if key couldnt be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *get;
	unsigned long int index;

	if (!ht || !key || !(*key))
	{
		return (NULL);
	}

	/* get key index */
	index = key_index((const unsigned char *)key, ht->size);
	get = ht->array[index];
	while (get != NULL) /* loop through list */
	{
		/* if key is met */
		if (strcmp(get->key, key) == 0)
		{
			return (get->value);
		}
		get = get->next;
	}
	return (NULL); /* return NULL if key couldn't be found */
}
