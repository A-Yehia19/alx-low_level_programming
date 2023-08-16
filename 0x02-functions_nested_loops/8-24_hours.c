#include "main.h"

/**
 * jack_bauer - detect sign of number
 * Return: 0 for uppercase, 1 for lowercase
 */

void jack_bauer(void)
{
	int hour, min;

	for (hour = 0 ; hour < 24 ; hours++)
	{
		for (min = 0 ; min < 60 ; min++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
