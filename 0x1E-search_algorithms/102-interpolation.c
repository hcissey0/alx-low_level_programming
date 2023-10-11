#include "search_algos.h"

/**
 * interpolation_search - Searches using interpolation
 * @array: The array to search through
 * @size: The size of the @array
 * @value: The value to search for
 * Return: The index of @value or -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, m;

	if (array == NULL || size == 0)
		return (-1);
	l = 0;
	i = size - 1;
	while ((array[i] != array[l]) &&
			(value >= array[l]) &&
			(value <= array[i]))
	{
		m = l + ((value - array[l]) * (i - l) /
				(array[i] - array[l]));
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);
		if (array[m] < value)
			l = m + 1;
		else if (value < array[m])
			i = m - 1;
		else
			return (m);
	}
	printf("Value checked array[%lu] ", l);
	if (value == array[l])
	{
		printf("= [%d]\n", array[l]);
		return (l);
	}
	else
	{
		printf("is out of range\n");
		return (-1);
	}
}
