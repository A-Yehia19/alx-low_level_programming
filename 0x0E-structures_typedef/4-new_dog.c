#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function name
 * @name: input
 * @age: input
 * @owner: input
 * Return: result
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lenName, lenOwner, i;

	lenName = sizeof(name) / sizeof(char);
	lenOwner = sizeof(owner) / sizeof(char);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(lenName * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(lenOwner * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= lenName; i++)
		dog->name[i] = name[i];

	for (i = 0; i <= lenOwner; i++)
		dog->owner[i] = owner[i];

	dog->age = age;

	return (dog);
}
