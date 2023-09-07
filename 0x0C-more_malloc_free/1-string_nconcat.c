#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function name
 * @s1: input
 * @s2: input
 * @n: input
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, lenRes;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	if (n >= len2)
		n = len2;

	result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
		return (NULL);

	lenRes = 0;
	for (len1 = 0; s1[len1]; len1++, lenRes++)
		result[len1] = s1[len1];

	for (len2 = 0; len2 < n; len2++, lenRes++)
		result[lenRes] = s2[len2];

	result[lenRes] = '\0';

	return (result);
}
