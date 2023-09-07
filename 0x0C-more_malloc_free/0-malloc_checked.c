#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function name
 * @b: input
 * Return: result
 */

void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);
	if (result == NULL)
		exit(98);

	return (result);
}
