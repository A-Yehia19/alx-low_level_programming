#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long num[100], i;

	num[0] = 1;
	num[1] = 1;

	printf("1, ");
	for (i = 2 ; i < 51 ; i++)
	{
		num[i] = num[i-1] + num[i-2];
		printf("%ld", num[i]);
		if (i != 50)
			printf(", ");
	}

	printf("\n");
	return (0);
}
