#include "lists.h"

/**
 * pop_listint - pops the head of the list out
 * @head: the head of the list
 *
 * Return: the value of the element
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *ptr, *temp;

	ptr = *head;
	if (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		i = temp->n;
		free(temp);
		*head = ptr;
	}
	return (i);
}
