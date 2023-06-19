#include "main.h"

/**
 * _memset - set memory
 * @s: character array
 * @b: byte to set
 * @n: number of bytes to change
 * Return: character array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
