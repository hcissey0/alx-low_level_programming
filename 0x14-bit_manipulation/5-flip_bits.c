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
	unsigned long int i = 0, nm = n ^ m;

	while (nm)
	{
		i += nm & 1;
		nm >>= 1;
	}
	return (i);
}
