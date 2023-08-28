#include "main.h"

/**
 * _strchr - function name
 * @s: input
 * @c: input
 * Return: result
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
			return (s + i);
	}

	return ((char *)0);
}
