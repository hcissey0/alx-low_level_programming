#include "main.h"

/**
 * flip_bits - finds the number of flips you will do to get to another number
 * @n: first number
 * @m: second number
 *
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0, r, mask;

	if (n > m)
		r = 1;
	else
		r = 0;
	mask = ~0;
	while (n != m)
	{
		mask <<= i;
		if (r)
			m ^= mask;
		else
			n ^= mask;
		i++;
	}
	return (i);
}
