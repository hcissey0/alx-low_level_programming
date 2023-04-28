#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked list
 * @h: head of the list
 *
 * Return: returns the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	listint_t *ptr;

	ptr = (listint_t *)h;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
