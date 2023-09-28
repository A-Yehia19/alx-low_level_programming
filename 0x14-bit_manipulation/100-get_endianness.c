#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - function name
 * @n: input
 * @m: input
 * Return: result
 */

int get_endianness(void)
{
	int i = 1;

	if ((i >> 31) == 1)
		return (0);
	else
		return (1);
}
