#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function name
 * @d: input
 * @name: input
 * @age: input
 * @owner: input
 * Return: result
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->age = age;
	d->name = name;
	d->owner = owner;
}
