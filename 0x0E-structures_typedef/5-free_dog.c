#include "dog.h"

/**
 * free_dog - frees the memory allocated to a dog
 * @d: the dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(&(d->age));
	free(d->owner);
	free(d);
}
