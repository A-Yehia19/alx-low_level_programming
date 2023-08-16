#include "main.h"

/**
 * print_to_98- add two numbers
 * @n: start number
 * Return: none
 */

void print_to_98(int n)
{
	if (n <= 98)
		for ( ; n <= 98 ; n++)
		{
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	else
		for ( ; n >= 98 ; n--)
		{
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else if (n < 100)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}else
			{
				_putchar(n / 100 + '0');
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
}
