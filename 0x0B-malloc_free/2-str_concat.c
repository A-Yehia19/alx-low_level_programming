#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function name
 * @s1: input
 * @s2: input
 * Return: result
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (i = 0; i < len2; i++)
		p[i + len1] = s2[i];
	p[len1 + len2] = '\0';

	return (p);
}
