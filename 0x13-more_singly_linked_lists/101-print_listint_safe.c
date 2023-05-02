#include "lists.h"

/**
 * print_listint_safe - prints listint safely
 * @head: head of the list
 *
 * Return: returns the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *temp, *loop;

	if (head == NULL)
		return (i);
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		i++;
		temp = head;
		head = head->next;
		/* check if there's a node pointing to a previous node */
		if (temp <= head)
		{
			loop = temp;
			while (loop != head)
			{
				printf("[%p] %d\n", (void *)loop, loop->n);
				i++;
				loop = loop->next;
			}
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}

	return (i);
}
