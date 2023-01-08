#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

void str_table(hash_node_t *tab, char *str, int count, int size);

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: the hash table to print
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	char *buf;
	unsigned long int i;
	int len, buff_size = 1024, count = 0;

	if (!ht || !ht->array)
	{
		return;
	}

	buf = calloc(buff_size, 1);
	if (buf == NULL) /* malloc fails */
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++) /* loop through table */
	{
		if (ht->array[i]) /* access index with items */
		{
			str_table(ht->array[i], buf, count, buff_size);
		}
	}
	len = strlen(buf);
	buf[len - 1] = '\0'; /* null terminate last byte */
	buf[len - 2] = '\0'; /* null terminate second last byte */
	printf("%s", buf);
	free(buf);
	printf("}\n");
}

/**
 * str_table - store hash table in a string
 *
 * @tab: the hash table to store
 * @str: string
 * @count: tracks the number of characters in string
 * @size: buffer size
 *
 * Return: void
 */

void str_table(hash_node_t *tab, char *str, int count, int size)
{


	while (tab != NULL)
	{
		count = strlen(tab->key) + strlen(tab->value) + 4;
		if (count >= size) /* buffer overflow */
		{
			str = realloc(str, size * 2); /* reallocate memory */
			if (str == NULL) /* fails to reallocate memory */
			{
				free(str);
				return;
			}
		}
		sprintf(str + strlen(str), "'%s': '%s'", tab->key, tab->value);
		strcat(str, ", "); /* append comma and space */

		tab = tab->next; /* go to next node */
	}
}
