#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first, second, third;

	for (first = '0'; first <= '9'; first++)
		for (second = first + 1; second <= '9'; second++)
			for (third = second + 1; third <= '9'; third++)
			{
				putchar(first);
				putchar(second);
				putchar(third);
				if (first != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}

	putchar('\n');
	return (0);
}