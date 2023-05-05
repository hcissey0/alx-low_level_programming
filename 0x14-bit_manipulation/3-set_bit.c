#include "main.h"

/**
 * set_bit - sets the bit of a number to the specified index
 * @n: the number
 * @index: the index
 *
 * Return: 1 on success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
