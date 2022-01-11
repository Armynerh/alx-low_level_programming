#include "hash_tables.h"

/**
 * key_index - Gets the index of a key
 * @key: Key of the value
 * @size: Size of the array of the hash table
 *
 * Return: The index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
