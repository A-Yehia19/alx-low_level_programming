#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function name
 * @array: input
 * @size: input
 * @action: input
 * Return: result
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}