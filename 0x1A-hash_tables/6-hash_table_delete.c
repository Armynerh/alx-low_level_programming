#include "hash_tables.h"

/**
 * hash_table_delete - Deletes hash table
 * @ht: Key of the value
 *
 * Return: The index
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *temp;

	for (idx = 0; idx < ht->size; idx++)
	{
		while (ht->array[idx] != NULL)
		{
			temp = ht->array[idx]->next;
			free(ht->array[idx]->key);
			free(ht->array[idx]->value);
			free(ht->array[idx]);
			ht->array[idx] = temp;
		}
	}
	free(ht->array);
	free(ht);
}
