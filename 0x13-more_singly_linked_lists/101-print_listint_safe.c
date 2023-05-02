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
	listint_t *ptr, *temp;

	ptr = (listint_t *)head;
	while (ptr != NULL)
	{
		if (ptr > ptr->next)
		{
			printf("[%p] %d\n", (void *)ptr, ptr->n);
			temp = ptr;
			ptr = ptr->next;
		}
		else
		{
			temp = ptr;
			ptr = NULL;
		}
		i++;
	}
	printf("[%p] %d\n", (void *)temp, temp->n);
	return (i);
}
