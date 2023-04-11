#include "main.h"

/**
 * create_array - creates an array with size
 * @size: the size of the array
 * @c: the character to put in the array
 *
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (!s)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
