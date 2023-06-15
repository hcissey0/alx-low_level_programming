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
	dlistint_t *ptr = *h, *new, *tmp;

	while (ptr && ptr->prev)
		ptr = ptr->prev;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	while (ptr != NULL)
	{
		if (idx == i)
		{
			tmp = ptr->prev;
			ptr->prev = new;
			new->prev = tmp;
			tmp->next = new;
			new->next = ptr;
			return (new);
		}
		i++;
		tmp = ptr;
		ptr = ptr->next;
	}
	if ((ptr == NULL) && (i == idx))
	{
		tmp->next = new;
		new->prev = tmp;
		return (new);
	}
	free(new);
	return (NULL);
}
