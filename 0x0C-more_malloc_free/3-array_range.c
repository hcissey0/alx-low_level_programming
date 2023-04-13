#include "main.h"

/**
 * array_range - creates an array eith the range specified
 * @min: minimum
 * @max: maximum
 * Return: pointer to the location of the array
 */
int *array_range(int min, int max)
{
	int *s, size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	s = malloc(sizeof(int) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = min + i;
	return (s);
}
