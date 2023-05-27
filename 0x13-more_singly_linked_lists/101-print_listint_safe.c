#include "lists.h"

/**
 * print_listint_safe - prints listint safely
 * @head: head of the list
 *
 * Return: returns the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast;

	if (head == NULL)
		exit(98);
	slow = head;
	fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next;
				fast = fast->next;
				count++;
			}
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			count++;
			break;
		}
	}
	while (head != fast)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	printf("-> [%p] %d\n", (void *)fast, fast->n);
	return (count);
}
