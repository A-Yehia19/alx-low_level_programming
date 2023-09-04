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
	if (size == 0)
	{
		return (0);
	}

	char *p;
	int i;

	p = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
