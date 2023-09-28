#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - function name
 * @n: input
 * @index: input
 * Return: result
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = -2 << index;
	*n = *n & mask;
	return (1);
}
