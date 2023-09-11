#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function name
 * @name: input
 * @age: input
 * @owner: input
 * Return: result
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);
    
    dog->name = name;
    dog->age = age;
    dog->owner = owner;

    return (dog);
}
