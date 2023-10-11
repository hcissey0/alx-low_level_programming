#include "search_algos.h"

/**
 * linear_skip - searches for @value in a sorted skip list
 * @list: A pointer to the list head
 * @value: The value to search for
 * Return: a pointer to the node of the value or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *left, *right;

	if (list == NULL)
		return (NULL);
	left = list;
	right = list->express;
	while (right && right->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				right->index, right->n);
		left = right;
		if (right->express)
			right = right->express;
		else
		{
			while (right->next)
				right = right->next;
			break;
		}
	}
	printf("Value checked at index [%lu] = [%d]\n",
			right->index, right->n);
	printf("Value found between indexes [%lu] and [%lu]\n",
			left->index, right->index);
	while (left && left->index <= right->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				left->index, left->n);
		if (left->n == value)
			return (left);
		left = left->next;
	}
	return (NULL);
}
