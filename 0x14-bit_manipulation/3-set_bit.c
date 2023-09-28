#include "main.h"
#include <stdlib.h>

/**
 * set_bit - function name
 * @n: input
 * @index: input
 * Return: result
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;
	*n = *n | mask;
	return (1);
}
