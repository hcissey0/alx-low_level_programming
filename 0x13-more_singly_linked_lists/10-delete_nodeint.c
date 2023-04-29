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

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (-1);
	}
	temp = NULL;
	ptr = *head;
	while (ptr != NULL && i < index)
	{
		temp = ptr;
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
		return (-1);
	temp->next = ptr->next;
	free(ptr);
	return (1);
}
