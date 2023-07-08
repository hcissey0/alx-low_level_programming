#include "hash_tables.h"

/**
 * hash_table_print - Prints the HashTable
 * @ht: The HashTable
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int check = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				if (check)
					printf(", ");
				else
					check = 1;
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}

		}
	}
	printf("}\n");
}
