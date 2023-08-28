#include "main.h"
#include <stdio.h>

/**
 * _strspn - function name
 * @s: input
 * @accept: input
 * Return: result
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int end, i;

    for (end = 0 ; s[end] != '\0'; end++){
        int found;

        found = 0;
        for (i = 0; accept[i] != '\0'; i++)
        {
            if (accept[i] == s[end])
            {
                found = 1;
                break;
            }
        }

        if (!found)
        break;
    }

    return (end);
}
