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
	num[1] = 2;
	i = 2;

	printf("1, 2");
	while (1)
	{
		printf(", ");
		num[i] = num[i - 1] + num[i - 2];

		if (num[i] > 4000000)
			break;

		printf("%ld", num[i]);
		i++;
	}

	printf("\n");
	return (0);
}
