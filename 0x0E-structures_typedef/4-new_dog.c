#include "dog.h"

/**
 * new-dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t *));
	if (!d)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
