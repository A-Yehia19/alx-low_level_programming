#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long num[1000], i, sum;

	num[0] = 1;
	num[1] = 2;
	i = 1;

	sum = 0;
	while (num[i] < 4000000)
	{
		if (num[i] % 2 == 0)
			sum += num[i];
		
		i++;
		num[i] = num[i - 1] + num[i - 2];
	}

	printf("%ld\n", sum);
	return (0);
}
