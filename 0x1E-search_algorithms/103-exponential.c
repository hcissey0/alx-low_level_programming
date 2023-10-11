#include "search_algos.h"

/**
 * min - finds the min of two numbs
 * @a: the first number
 * @b: the second number
 * Return: the smallest
 */
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

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
 * bin_search - Searches through an array
 * using the Binary Search Algorithm
 * @array: The array to search through
 * @left: the left side
 * @right: the right side
 * @value: The value to search for
 *
 * Return: The index of the found value or -1 otherwise
 */
int bin_search(int *array, size_t left, size_t right, int value)
{
	size_t l, r, m;

	if (array == NULL)
		return (-1);
	l = left;
	r = right - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", l, r);
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

/**
 * exponential_search - Searches using exponential search algo
 * @array: The array
 * @size: Size of the array
 * @value: the value to search for
 * Return: the index of @value or -1 on failure
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t b;

	if (array == NULL || size == 0)
		return (-1);
	b = 1;
	while (b < size && array[b] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		b *= 2;
	}
	return (bin_search(array, b / 2, min(b + 1, size), value));
}
