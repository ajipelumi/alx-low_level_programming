#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: the hash table to print
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	char *str;
	char braces[] = "{}";
	unsigned long int i;
	int len;

	if (!ht)
	{
		return;
	}

	printf("%c", braces[0]);
	for (i = 0; i < ht->size; i++) /* loop through table */
	{
		if (ht->array[i]) /* access index with items */
		{
			node = ht->array[i];
			while (node != NULL)
			{
				str = malloc(sizeof(char) * strlen(node->key) * strlen(node->value) + 4);
				if (str == NULL) /* malloc fails */
				{
					return;
				}

				sprintf(str, "'%s' : '%s'", node->key, node->value);
				if (node->next == NULL)
				{
					strcat(str, ", ");
				}
				len = strlen(str);
				str[len - 1] = '\0'; /* null terminate last byte */
				str[len - 2] = '\0'; /* null terminate second last byte */
				printf("%s", str);
				free(str);
				node = node->next;
			}
		}
	}
	printf("%c", braces[1]);
	printf("\n");
}
