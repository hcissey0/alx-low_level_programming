#include "lists.h"

/**
 * sum_listint - returns the sum of the listint
 * @head: head of the listint
 *
 * Return: returns the sum of the elements
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		i += ptr->n;
		ptr = ptr->next;
	}
	return (i);
}
