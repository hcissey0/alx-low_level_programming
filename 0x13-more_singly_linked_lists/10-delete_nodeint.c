#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a specified index
 * @head: head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if succeeded, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr, *temp;

	ptr = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	temp = NULL;
	while (i < index - 1)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
		return (-1);
	temp = ptr->next->next;
	free(ptr->next);
	ptr->next = temp;
	return (1);
}
