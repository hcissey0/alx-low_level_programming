#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: list's head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr, *temp;

	ptr = head;
	if (ptr == NULL)
		return;
	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = temp;
	}
}
