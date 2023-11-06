#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: dog structure
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("nil\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age <= 0)
		printf("nil\n");
	else
		printf("Age: %s\n", d->age);

	if (d->owner == NULL)
		printf("nil\n");
	else
		printf("Owner: %s\n", d->owner);

}