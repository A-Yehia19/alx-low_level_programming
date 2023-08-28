#include "main.h"

/**
 * _strpbrk - function name
 * @s: input
 * @accept: input
 * Return: result
 */

char *_strpbrk(char *s, char *accept)
{
	int i, found;

	while (*s != '\0')
	{
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				found = 1;
				break;
			}
		}

		if (found)
			return (s);

		s++;
	}

	return ((char *)0);
}
