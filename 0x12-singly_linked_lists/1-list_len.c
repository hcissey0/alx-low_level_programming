#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list
 * @h: head of the list
 * Return: the number of the lists in it
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;
	list_t *ptr = NULL;

	ptr = (list_t *)h;
	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
