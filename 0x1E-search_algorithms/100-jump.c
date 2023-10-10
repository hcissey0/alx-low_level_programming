#include <math.h>
#include "search_algos.h"

/**
 * min - returns the minimum num between two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the minimum
 */
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

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
	size_t prev, jump, n;

	if (array == NULL)
		return (-1);
	prev = 0;
	n = sqrt(size);
	jump = n;
	while (array[min(jump, size) - 1] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = jump;
		jump = jump + n;
		if (prev >= size)
			return (-1);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, jump);

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == min(jump, size))
			return (-1);
	}
	if (array[prev] == value)
		return (prev);
	return (-1);
}
