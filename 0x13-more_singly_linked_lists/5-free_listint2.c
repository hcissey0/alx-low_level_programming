#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head to null
 * @head: the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	ptr = *head;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
	*head = NULL;
}
