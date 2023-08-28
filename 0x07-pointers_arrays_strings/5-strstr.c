#include "main.h"

/**
 * _strstr - function name
 * @haystack: input
 * @needle: input
 * Return: result
 */

char *_strstr(char *haystack, char *needle)
{
	int start, len;

	for (start = 0, len = 0; haystack[start] != '\0'; len++)
	{
		if (needle[len] == '\0')
			break;

		if (haystack[start + len] != needle[len])
		{
			start++;
			len = -1;
		}
	}

	if (haystack[start] == '\0')
		return ((char *)0);
	else
		return (haystack + start);
}
