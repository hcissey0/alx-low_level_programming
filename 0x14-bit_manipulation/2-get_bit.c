#include "main.h"

/**
 * get_bit - gets the bit at a specified location
 * @n: the number to search from its binary
 * @index: the index to look at
 *
 * Return: the bit at the index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & (1 << index)) != 0);
}
