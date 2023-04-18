#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *dname, *downer;
	int i, nl = 0, ol = 0;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	while (*(name + nl))
		nl++;
	while (*(owner + ol))
		ol++;
	dname = malloc(sizeof(char) * (nl + 1));
	if (dname == NULL)
	{
		free(d);
		return (NULL);
	}
	downer = malloc(sizeof(char) * (ol + 1));
	if (downer == NULL)
	{
		free(d);
		free(dname);
		return (NULL);
	}
	for (i = 0; i <= nl; i++)
		dname[i] = name[i];
	for (i = 0; i <= ol; i++)
		downer[i] = owner[i];
	d->name = dname;
	d->age = age;
	d->owner = downer;
	return (d);
}
