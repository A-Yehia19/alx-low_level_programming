#include "main.h"
#include <stdlib.h>

/**
 * get_bit - function name
 * @n: input
 * @index: input
 * Return: result
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int ans;

	if (index > 63)
		return (-1);

	mask = 1 << index;
	ans = n & mask;
	return (ans >> index);
}
