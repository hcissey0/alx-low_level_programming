#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at the specified index
 * @head: head of the node
 * @idx: index to insert at
 * @n: the element value
 *
 * Return: the pointer to the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr, *temp, *temp2;

	ptr = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (ptr == NULL && idx > 0)
	{
		free(temp);
		return (NULL);
	}
	temp2 = ptr;
	while (ptr != NULL)
	{
		if (i == idx)
		{
			temp2->next = temp;
			temp->next = ptr;
			return (temp);
		}
		temp2 = ptr;
		ptr = ptr->next;
		i++;
	}
	free(temp);
	return (NULL);
}
