#include <stdio.h>
#include <string.h>
#include <stddef.h>
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
	char *buf;
	unsigned long int i;
	int len, buff_size = 1024, count = 0;

	if (!ht)
		return;

	buf = calloc(buff_size, sizeof(char));
	if (buf == NULL) /* malloc fails */
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++) /* loop through table */
	{
		if (ht->array[i]) /* access index with items */
			node = ht->array[i];
			while (node != NULL)
			{
				count = strlen(node->key) + strlen(node->value) + 4;
				if (count >= buff_size) /* buffer overflow */
					buf = realloc(buf, (buff_size * 2)); /* reallocate memory */
					if (buf == NULL) /* fails to reallocate memory */
						free(buf);
						return;

				sprintf(buf + strlen(buf), "'%s' : '%s'", node->key, node->value);
				if (node->next == NULL)
					strcat(buf, ", "); /* append comma and space */

				node = node->next; /* go to next node */
			}
	}
	len = strlen(buf);
	buf[len - 1] = '\0'; /* null terminate last byte */
	buf[len - 2] = '\0'; /* null terminate second last byte */
	printf("%s", buf);
	free(buf);
	putchar('}');
	putchar('\n');
}
