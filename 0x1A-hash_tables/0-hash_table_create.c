#include "hash_tables.h"

/**
 * hash_table_create - Creates a new HashTable
 * @size: The size of the HashTable
 * Return: a pointer to the created HashTable or NULL on error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * size);
	if (table->array == NULL)
		return (NULL);

	return (table);
}
