#include "function_pointers.h"

/**
 * array-iterator - iterates through a given array with a given func
 * @array: the array
 * @size: size of the array
 * @action: the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, s = (int) size;

	for (i = 0; i < s; i++)
		action(array[i]);
}
