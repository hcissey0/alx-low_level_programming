#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list_t
 * @head: given head of the node
 * @str: string data of the new node
 *
 * Return: returns the address of the newly added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = strlen(str);
	list_t *ptr, *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = i;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;

	return (temp);
}
