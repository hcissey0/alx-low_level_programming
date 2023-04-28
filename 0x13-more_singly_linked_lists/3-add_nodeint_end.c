#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of the node
 * @head: head of the node
 * @n: the integer
 *
 * Return: returns the pointer to the added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (ptr == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;

	return (temp);
}
