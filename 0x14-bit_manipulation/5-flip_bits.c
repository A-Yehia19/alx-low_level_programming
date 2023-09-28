#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - function name
 * @n: input
 * @m: input
 * Return: result
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ans;

	ans = 0;
	while (n != m)
	{
		if ((n & 1) != (m & 1))
			ans++;

		n >>= 1;
		m >>= 1;
	}

	return (ans);
}
