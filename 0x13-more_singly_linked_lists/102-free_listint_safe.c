#include "lists.h"

/**
 * free_listint_safe - frees a listint with loops
 * @h: head of the list
 *
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *temp, *head = *h;

	if (h == NULL || *h == NULL)
		return (i);
	while (head)
	{
		i++;
		temp = head;
		head = head->next;
		free(temp);
		if (temp <= head)
			break;
	}
	*h = NULL;
	return (i);
}
