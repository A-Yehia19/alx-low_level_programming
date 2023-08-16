#include "main.h"

/**
 * print_last_digit - detect sign of number
 * @n: takes in a character
 * Return: 0 for uppercase, 1 for lowercase
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n % 10);
}
