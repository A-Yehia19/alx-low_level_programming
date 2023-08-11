#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	srand(time(NULL));
	int n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is psoitive\n", n);
	else if (n < 0)
		printf("%d is psoitive\n", n);
	else
		printf("%d is psoitive\n", n);
	return (0);
}
