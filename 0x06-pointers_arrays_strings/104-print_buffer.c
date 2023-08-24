#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - function name
 * @b: input
 * @size: input
 * Return: result
 */

void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j += 2)
		{
			if (i + j < size)
				printf("%02x%02x ", b[i + j], b[i + j + 1]);
			else
				printf("     ");
		}

		for (j = 0; j < 10; j++)
		{
			if(i + j >= size)
				break;

			if (isprint(b[i + j]) == 0)
				printf(".");
			else
				printf("%c", b[i + j]);
		}

		printf("\n");
	}

	if (size == 0)
		printf("\n");
}
