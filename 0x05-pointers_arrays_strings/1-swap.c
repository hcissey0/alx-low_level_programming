#include "main.h"

/**
 * swap_int - swaps integers
 * @a: first num
 * @b: second num
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
