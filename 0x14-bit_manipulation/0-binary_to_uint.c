#include "main.h"

/**
 * binary_to_uint - convert a given strin with zeros and ones to unsigned int
 * @b: the binary string
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		n = n * 2 + (b[i] - '0');
		i++;
	}
	return (n);
}
