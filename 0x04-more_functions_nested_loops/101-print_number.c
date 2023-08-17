#include "main.h"
#include <math.h>

/**
 * print_number - function name
 * @n: input argument
 * Return: result
 */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	int len, dummy;

	len = 0;
	dummy = n;
	while (dummy)
	{
		len++;
		dummy /= 10;
	}

	for (len-- ; len >= 0 ; len--)
	{
		int digit;

		digit = n / pow(10, len);
		_putchar(digit % 10 + '0');
	}
}
