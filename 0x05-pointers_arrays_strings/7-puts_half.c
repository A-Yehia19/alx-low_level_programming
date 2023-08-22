#include "main.h"

/**
 * puts_half - function name
 * @str: input
 * Return: result
 */

void puts_half(char *str)
{
	int len, i, n;

	len = 0;
	while (str[len] != '\0')
		len++;

	n = len / 2;
	n = len - n;

	for (i = n ; i < len ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
