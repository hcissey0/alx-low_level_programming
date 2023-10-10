#include "search_algos.h"

/**
 * print_array - Prints array
 * @arr: the array to print
 * @start: where to start printing
 * @end: where to end printing
 * Return: void
 */
void print_array(int *arr, size_t start, size_t end)
{
	if (arr == NULL)
		return;
	while (start <= end)
	{
		printf("%d", arr[start]);
		if (start != end)
			printf(", ");
		start++;
	}
	printf("\n");
}

/**
 * binary_search - Searches through an array
 * using the Binary Search Algorithm
 * @array: The array to search through
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index of the found value or -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;
	while (l <= r)
	{
		printf("Searching in array: ");
		print_array(array, l, r);
		m = (l + r) / 2;
		if (array[m] > value)
			r = m - 1;
		else if (array[m] < value)
			l = m + 1;
		else
			return (m);
	}
	return (-1);
}
