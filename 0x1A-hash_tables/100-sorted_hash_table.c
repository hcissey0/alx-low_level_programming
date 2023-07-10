#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array of the table
 * Return: the pointer to the hash table or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned int i;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[size] = NULL;

	return (table);
}

/**
 * add_to_sorted - Adds a node to the sorted linked list
 * @ht: the hash table
 * @node: the node to add
 */
void add_to_sorted(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp;

	if (ht->shead == NULL || strcmp(node->key, ht->shead->key) < 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = node;
		else
			ht->stail = node;
		ht->shead = node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, node->key) < 0)
			tmp = tmp->snext;
		node->sprev = tmp;
		node->snext = tmp->snext;
		if (tmp->snext != NULL)
			tmp->snext->sprev = node;
		else
			ht->stail = node;
		tmp->snext = node;
	}
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The HashTable
 * @key: The key
 * @value: The value
 * Return: 1 on success 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	add_to_sorted(ht, node);
	return (1);
}

/**
 * shash_table_get - Gets a key value
 * @ht: the hash table
 * @key: the key to get
 * Return: the value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Prints a hash table
 * @ht: the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;
	printf("{");
	for (tmp = ht->shead; tmp != NULL; tmp = tmp->snext)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		if (tmp->snext != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in a reversed order
 * @ht: the head of the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;
	printf("{");
	for (tmp = ht->stail; tmp != NULL; tmp = tmp->sprev)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		if (tmp->sprev != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}


	free(ht->array);
	free(ht);
}
