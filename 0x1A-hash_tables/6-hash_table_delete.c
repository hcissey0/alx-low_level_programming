#include "hash_tables.h"

/**
 * free_node - Frees a node
 * @node: the node pointer
 */
void free_node(hash_node_t *node)
{
	if (node->key != NULL)
		free(node->key);
	if (node->value != NULL)
		free(node->value);
	free(node);
}

/**
 * hash_table_delete - Deletes a HashTable
 * @ht: The HashTable
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *ptr;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			tmp = ptr;
			ptr = ptr->next;
			free_node(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
