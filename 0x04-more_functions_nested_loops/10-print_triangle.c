#include "main.h"

/**
 * print_triangle - function name
 * @size: input argument
 * Return: result
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1 ; i <= size ; i++)
	{
		for (j = size - i ; j > 0 ; j--)
		{
			_putchar(' ');
		}
		for (j = 1 ; j <= i ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
