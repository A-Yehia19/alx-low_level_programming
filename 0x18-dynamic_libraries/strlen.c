#include "main.h"

/**
 * _strlen - function name
 * @s: input
 * Return: result
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
