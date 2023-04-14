#include "main.h"

/**
 * _realloc - imitates realloc
 * @ptr: previous location
 * @old_size: the old size of ptr
 * @new_size: the new size
 *
 * Return: pointer to the reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *s;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	if (ptr == NULL)
		return (s);
	//memcpy(s, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);

	return (s);
}
