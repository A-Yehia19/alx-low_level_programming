#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function name
 * @d: inputv
 * Return: result
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
