#include "dog.h"

/**
 * print_dog - prints a dog
 * @d: the dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);
	printf("Age: ");
	printf("%f\n", d->age);
	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}
