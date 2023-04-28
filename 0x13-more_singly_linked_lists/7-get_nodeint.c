#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at specified index
 * @head: head of the node
 * @index: index to find
 *
 * Return: returns the pointer the node if found, NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr;

	ptr = head;
	if (ptr == NULL)
		return (NULL);
	while (i != index)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		i++;
	}
	return (ptr);
}
