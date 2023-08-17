#include <stdio.h>

/**
 * main - main function
 *
 * Return: returns 0
 */

int main(void)
{
	int factor = 2;
	long n = 612852475143;

	while (n != factor)
	{
		if (n % factor == 0)
			n = n / factor;
		else
			factor++;
	}
	printf("%ld\n", n);
	return (0);
}