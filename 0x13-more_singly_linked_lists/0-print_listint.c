#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 * @h: head of the linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	listint_t *ptr;

	ptr = (listint_t *)h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}

	return (i);
}
