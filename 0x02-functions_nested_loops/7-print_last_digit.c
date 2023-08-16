#include "main.h"

/**
 * print_last_digit - detect sign of number
 * @n: takes in a character
 * Return: 0 for uppercase, 1 for lowercase
 */

int print_last_digit(int n)
{
	return (_abs(n) % 10);
}
