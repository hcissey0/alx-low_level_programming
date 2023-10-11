#include <math.h>
#include "search_algos.h"

/**
 * jump_search - This is the jump search algorithm
 * @array: the array
 * @size: size of the array
 * @value: the value to search for
 *
 * Return: index of @value, -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev, jump, i;

	if (array == NULL || size == 0)
		return (-1);
	prev = 0;
	jump = sqrt(size);

	for (i = 0;; i += jump)
	{
		if (array[i] >= value || i >= size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
			for (prev = i - jump; prev <= i && prev < size; prev++)
			{
				printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
				if (array[prev] == value)
					return (prev);
			}
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	return (-1);
}
