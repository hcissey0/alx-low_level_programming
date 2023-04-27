#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: the list's head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	list_t *ptr = NULL;

	ptr = (list_t *)h;
	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
