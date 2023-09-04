#include "main.h"
#include <stdlib.h>

/**
 * create_array - function name
 * @size: input
 * @c: input
 * Return: result
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(char));

	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
