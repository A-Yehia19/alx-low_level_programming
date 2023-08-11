#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int first = 0; first <= 98; first++)
		for (int second = first + 1; second <= 99; second++)
		{
			if (first < 10)
				putchar('0');
			else
				putchar(first / 10 + '0');
			putchar(first % 10 + '0');

			putchar(' ');

			if (second < 10)
				putchar('0');
			else
				putchar(second / 10 + '0');
			putchar(second % 10 + '0');

			if (first != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}

	putchar('\n');
	return (0);
}
