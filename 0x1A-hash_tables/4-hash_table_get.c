#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: pointer to the value or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx_k = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx_k = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx_k];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
