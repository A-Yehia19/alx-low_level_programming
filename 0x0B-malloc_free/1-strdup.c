#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function name
 * @str: input
 * Return: result
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	p = malloc((len + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		p[i] = str[i];

	return (p);
}
