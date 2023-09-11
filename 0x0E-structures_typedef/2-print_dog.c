#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function name
 * @d: input
 * Return: result
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->name == NULL)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);

		if (d->name == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
