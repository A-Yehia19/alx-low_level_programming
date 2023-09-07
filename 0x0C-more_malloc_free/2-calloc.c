#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function name
 * @nmemb: input
 * @size: input
 * Return: result
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		((char *)result)[i] = 0;

	return (result);
}
