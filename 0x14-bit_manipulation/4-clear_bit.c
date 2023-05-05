#include "main.h"

/**
 * clear_bit - sets the bit of a specified index of a number to 0
 * @n: the number
 * @index: the index
 *
 * Return: 1 on success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
