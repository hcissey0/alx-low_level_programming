#include "search_algos.h"
#include <math.h>

/**
 * jump_list - the jump search algo in linked lists
 * @list: A pointer to the head of the list
 * @size: Size of the list
 * @value: the value to search for
 * Return: a pointer to the node of @value or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i;
	listint_t *left, *right;

	if (list == NULL || size == 0)
		return (NULL);
	left = list;
	right = list;
	jump = sqrt(size);

	while (right->index < size - 1 && right->n < value)
	{
		left = right;
		for (i = 0; i < jump && right->next; i++)
			right = right->next;
		printf("Value checked at index [%lu] = [%d]\n",
				right->index, right->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			left->index, right->index);

	while (left->index <= right->index && left->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				left->index, left->n);
		if (left->n == value)
			return (left);
		left = left->next;
	}
	return (NULL);
}
