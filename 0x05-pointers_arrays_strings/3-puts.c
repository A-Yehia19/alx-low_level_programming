#include "main.h"

/**
 * _puts - function name
 * @str: input
 * Return: result
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
