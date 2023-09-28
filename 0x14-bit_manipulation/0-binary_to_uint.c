#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function name
 * @b: input
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ans, i;

	if (b == NULL)
		return (0);

	ans = 0;
	for (i = 0; b[i] != '\0'; i++)
		if (b[i] == '0' || b[i] == '1')
		{
			ans = ans << 1;
			ans = ans | (b[i] - '0');
		}
		else
			return (0);

	return (ans);
}
