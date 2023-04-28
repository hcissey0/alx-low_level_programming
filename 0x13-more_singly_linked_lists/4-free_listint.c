#include "lists.h"

/**
 * free_listint - frees a listint singly linked list
 * @head: head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr, *temp;

	ptr = head;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
}
