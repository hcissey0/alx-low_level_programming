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
 * bin_search_recursive - Searches through an array
 * using the Binary Search Algorithm
 * @array: the array
 * @low: The array to search through
 * @high: The size of the array
 * @value: The value to search for
 *
 * Return: The index of the found value or -1 otherwise
 */
int bin_search_recursive(int *array, size_t low, size_t high, int value)
{
	size_t m;

	if (array == NULL)
		return (-1);

	if (array[low] == value && low == high)
		return ((int)low);
	printf("Searching in array: ");
	print_array(array, low, high);
	if (low == high)
		return (-1);
	m = low + (high - low) / 2;
	if (array[m] >= value)
		return (bin_search_recursive(array, low, m, value));
	else
		return (bin_search_recursive(array, m + 1, high, value));
}

/**
 * advanced_binary - The binary search algorithm
 * @array: the array
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of @value or -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (bin_search_recursive(array, 0, size - 1, value));
}
