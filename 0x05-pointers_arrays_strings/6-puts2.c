#include "main.h"

/**
 * puts2 - function name
 * @str: input
 * Return: result
 */

void puts2(char *str)
{
    int len, i;
    char *tmp;

    len = 0;
    tmp = str;
    while (*tmp != '\0')
    {
        len++;
        tmp++;
    }

    for (i = 0 ; i < len ; i++)
	{
        if (i % 2 == 0)
            _putchar(str[i]);        
	}
    _putchar('\n');
}
