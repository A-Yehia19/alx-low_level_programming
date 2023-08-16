#include "main.h"

/**
 * print_times_table - detect sign of number
 * @n: last limit
 * Return: none
 */

void print_times_table(int n)
{
	int num, i;

	for (num = 0 ; num <= n && n < 15 ; num++)
	{
		for (i = 0 ; i <= n ; i++)
		{
			int ans;

			ans = num * i;
			if (i == 0)
				_putchar('0');
			else if (ans < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(ans + '0');
			}
			else if (ans < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ans / 10 + '0');
				_putchar(ans % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(ans / 100 + '0');
				_putchar((ans / 10) % 10 + '0');
				_putchar(ans % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
