#include "hash_tables.h"

/**
 * hash_djb2 - The djb2 algorithm
 * @str: The string to hash
 *
 * Return: the hash value of the string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned int i;
	unsigned long int h = 5381;

	for (i = 0; str[i]; i++)
		h = ((h << 5) + h) + str[i];
	return (h);
}
