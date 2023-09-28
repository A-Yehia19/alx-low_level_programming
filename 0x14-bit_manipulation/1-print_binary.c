#include "main.h"
#include <stdlib.h>

/**
 * print_binary - function name
 * @n: input
 * Return: result
 */

void print_binary(unsigned long int n)
{
    unsigned long int reversed, len;

    if (n == 0)
    {
        _putchar ('0');
        return;
    }

    len = 0;
	for (reversed = 0; n; n = n >> 1)
    {
        reversed = reversed << 1;
        reversed = reversed | (n & 1);
        len++;
    }

    while (len)
    {
        _putchar((reversed & 1) + '0');
        reversed = reversed >> 1;
        len--;
    }
    
}
