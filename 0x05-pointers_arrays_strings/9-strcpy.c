#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function name
 * @dest: input
 * @src: input
 * Return: result
 */

char *_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    do
    {
        dest[i] = src[i];
        i++;
    }while (src[i-1] != '\0');

    return (dest);
}
