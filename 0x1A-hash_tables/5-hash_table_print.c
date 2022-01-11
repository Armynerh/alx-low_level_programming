#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: hash table.
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int idx;
	unsigned int i = 0;

	if (ht)
	{
		printf("{");
		for (idx = 0; idx < ht->size; idx++)
		{
			tmp = ht->array[idx];
			while (tmp != NULL)
			{
				if (i == 1)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				i = 1;
				tmp = tmp->next;
			}
		}
		printf("}\n");
	}
}
