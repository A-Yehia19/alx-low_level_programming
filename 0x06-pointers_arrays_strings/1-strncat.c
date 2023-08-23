#include "main.h"

/**
 * _strncat - function name
 * @dest: input
 * @src: input
 * @n: input
 * Return: result
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest, len_src;

	for (len_dest = 0 ; dest[len_dest] != '\0' ; len_dest++)
		;

	for (len_src = 0 ; src[len_src] != '\0' && n; len_src++, len_dest++, n--)
		dest[len_dest] = src[len_src];

	dest[len_dest] = '\0';
	return (dest);
}
