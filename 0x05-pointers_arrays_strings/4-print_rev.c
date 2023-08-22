#include "main.h"

/**
 * print_rev - function name
 * @s: input
 * Return: result
 */

void print_rev(char *s)
{
	int len, i;
	char *tmp;

	len = 0;
	tmp = s;
	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = len - 1 ; i >= 0 ; i--)
	{
		_putchar(tmp[i]);
	}

	_putchar('\n');
}
