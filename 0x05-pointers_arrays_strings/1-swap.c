#include "main.h"

/**
 * swap_int - function name
 * @a: input
 * @b: input
 * Return: result
 */

void swap_int(int *a, int *b)
{
	int n;

    n = *a;
    *a = *b;
    *b = n;
}
