#include "lists.h"

/**
 * reverse_listint - reverses a listint linked list
 * @head: the head of the linked list
 *
 * Return: pointer to the first element
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (*head == NULL || head == NULL)
		return (NULL);
	prev = NULL;
	while ((*head) != NULL)
	{
		next = (*head)->next; /* save the next element */
		(*head)->next = prev; /* set the *head to point to the previous one */
		prev = (*head); /* set *head as the previous */
		(*head) = next; /* now set the next as *head */
	}
	/* at this point *head is NULL so set it to the previous element */
	(*head) = prev;

	return (*head);
}
