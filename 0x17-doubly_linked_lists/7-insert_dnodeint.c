#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at the specified index
 * @h: head of the list
 * @idx: the index
 * @n: the element
 *
 * Return: address of the new node or NULL on error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *ptr = *h, *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;
	if (idx == 0)
	{
		tmp->next = *h;
		(*h)->prev = tmp;
		*h = tmp;
		return (tmp);
	}
	while (i < idx - 1)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
		i++;
	}
	tmp->next = ptr->next;
	ptr->next->prev = tmp;
	tmp->prev = ptr;
	ptr->next = tmp;
	return (tmp);
}
