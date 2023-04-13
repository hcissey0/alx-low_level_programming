#include "main.h"

/**
 * malloc_checked - checks malloc
 * @b: size of bytes
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
