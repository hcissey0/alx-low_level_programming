#include "lists.h"

/**
 * add_dnodeint - add a node to a doubly linked list
 * @h: pointer to the head
 * @n: number to add
 *
 * Return: address of the added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	ptr->prev = NULL;
	if (*head != NULL)
		(*head)->prev = ptr;
	*head = ptr;

	return (ptr);
}
