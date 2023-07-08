#include "hash_tables.h"

/**
 * key_index - Finds the index of a given key
 * @key: The key
 * @size: The size of the array of the HashTable
 * Return: The index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
