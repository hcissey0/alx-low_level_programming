#include "main.h"

/**
 * _strcat - adds 2 strings
 * @dest: destination
 * @src: source
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int n = 0, i;

	while (dest[n] != '\0')
		n++;

	for (i = 0; src[i] != '\0'; i++)
		dest[n + i] = src[i];

	dest[n + i] = '\0';

	return (dest);
}
