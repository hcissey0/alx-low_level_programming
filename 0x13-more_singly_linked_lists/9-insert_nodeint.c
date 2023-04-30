#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at the specified index
 * @head: head of the node
 * @idx: index to insert at
 * @n: the element value
 *
 * Return: the pointer to the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	while (i < idx - 1)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		i++;
	}
	temp->next = ptr->next;
	ptr->next = temp;
	return (temp);
}
