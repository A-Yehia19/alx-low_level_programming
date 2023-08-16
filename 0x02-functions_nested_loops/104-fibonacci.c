#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int first, second, i, ans;

	first = 1;
	second = 2;

	printf("1, 2, ");
	for (i = 2 ; i < 98 ; i++)
	{
		ans = second + first;
		printf("%lu", ans);
		if (i != 97)
			printf(", ");

		first = second;
		second = ans;

	}

	printf("\n");
	return (0);
}
