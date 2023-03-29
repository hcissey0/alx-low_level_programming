#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to be reversed
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i;
	int arr[84];

	for (i = 0; i < n; i++)
		arr[i] = a[n - i - 1];

	for (i = 0; i < n; i++)
		a[i] = arr[i];
}
