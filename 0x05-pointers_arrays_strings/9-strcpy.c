#include "main.h"

/**
 * _strcpy - copies a string to another string
 * @dest: destination
 * @src: source
 * Return: a pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i, n = 0;

	while (src[n] != '\0')
		n++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
