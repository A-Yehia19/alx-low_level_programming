#include "main.h"

/**
 * _strcmp - function name
 * @s1: input
 * @s2: input
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int ans, i;

	ans = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			ans = s1[i] - s2[i];
			break;
		}
	}

	return (ans);
}
