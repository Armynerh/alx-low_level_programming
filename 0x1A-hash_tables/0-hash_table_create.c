#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array
 *
 * Return: A pointer to the newly created hash table
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;

	h_table = malloc(sizeof(hash_table_t));

	if (h_table == NULL)
		return (NULL);

	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);

	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}
	return (h_table);
}
