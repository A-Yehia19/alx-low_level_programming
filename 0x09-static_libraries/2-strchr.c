#include "main.h"

/**
 * _strchr - function name
 * @s: input
 * @c: input
 * Return: result
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
			break;

		s++;
	}

	if (c == *s)
		return (s);
	else
		return ((char *)0);
}
