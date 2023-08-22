#include "main.h"

/**
 * rev_string - function name
 * @s: input
 * Return: result
 */

void rev_string(char *s)
{
	int len, i;
	char *tmp;
	char swp;

	len = 0;
	tmp = s;
	while (*tmp != '\0')
	{
		len++;
	tmp++;
	}

	for (i = 0 ; i < len / 2 ; i++)
	{
		swp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = swp;
	}
}
