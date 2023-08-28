#include "main.h"

/**
 * _memset - function name
 * @s: input
 * @b: input
 * @n: input
 * Return: result
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
