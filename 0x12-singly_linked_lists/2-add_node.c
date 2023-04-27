#include "lists.h"

/**
 * add_node - adds a node to the linked lists
 * @head: head of the node
 * @str: the string to add
 *
 * Return: returns the address of the added node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *ptr;

	i = strlen(str);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
