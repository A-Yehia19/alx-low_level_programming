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

	for (lenName = 0; name[lenName] != '\0'; lenName++)
		;
	for (lenOwner = 0; owner[lenOwner] != '\0'; lenOwner++)
		;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(lenName * sizeof(char) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(lenOwner * sizeof(char) + 1);
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
