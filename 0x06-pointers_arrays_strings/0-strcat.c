#include "main.h"

/**
 * _strcat - function name
 * @dest: input
 * @src: input
 * Return: result
 */

char *_strcat(char *dest, char *src)
{
	int len_dest, len_src;

	for (len_dest = 0 ; dest[len_dest] != '\0' ; len_dest++);

	for (len_src = 0 ; src[len_src] != '\0' ; len_src++, len_dest++)
		dest[len_dest] = src[len_src];

	dest[len_dest] = '\0';
	return (dest);
}
