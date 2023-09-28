#include "main.h"
#include <stdlib.h>

/**
 * get_endianness - function name
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
