#include "function_pointers.h"

/**
 * array_iterator - iterates through a given array with a given func
 * @array: the array
 * @size: size of the array
 * @action: the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < (int) size)
		(*action)(array[i++]);
}
