#include "lists.h"

/**
 * add_nodeint - adds a node at the front
 * @head: head of the node
 * @n: the number to add
 *
 * Return: the pointer the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
