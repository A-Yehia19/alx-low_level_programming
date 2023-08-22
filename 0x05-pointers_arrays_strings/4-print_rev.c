#include "main.h"

/**
 * print_rev - function name
 * @s: input
 * Return: result
 */

void print_rev(char *s)
{
	if (*s != '\0')
    {
        print_rev(s+1);
    }
    _putchar(*s);
}
