#include "lists.h"

/**
 * print_listint_safe - prints listint safely
 * @head: head of the list
 *
 * Return: returns the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *ptr = head, *temp = NULL;

	if (head == NULL)
		exit(98);
	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		i++;
		temp = ptr;
		ptr = ptr->next;
		/* check if there's a node pointing to a previous node */
		if (temp <= ptr)
		{
			printf("-> [%p] %d\n", (void *)ptr, ptr->n);
			break;
		}
	}

	return (i);
}
