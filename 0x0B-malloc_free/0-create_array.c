#include "main.h"

/**
 * create_array - function name
 * @size: input
 * @c: input
 * Return: result
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
	{
		return (0);
	}

	p = malloc(size * sizeof(char));
	int i;

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
