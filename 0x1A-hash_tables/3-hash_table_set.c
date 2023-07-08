#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the HashTable
 * @ht: The HashTable
 * @key: the key
 * @value: the value
 * Return: 1 on success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (strlen(key) == 0)
		return (0);
	if (ht == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else if (strcmp(ht->array[index]->key, key) == 0)
	{
		strcpy(ht->array[index]->value, value);
		free(node->key);
		free(node->value);
		free(node);
	}
	else
	{
		node->next = ht->array[index];
		ht->array[index]->next = node;
	}
	return (1);
}
