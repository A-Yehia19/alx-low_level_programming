#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function name
 * @a: input
 * @size: input
 * Return: result
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i + size * i];
		sum2 += a[size * i + size - 1 - i];
	}

	printf("%d, %d\n", sum1, sum2);
}
