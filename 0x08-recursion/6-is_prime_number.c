#include "main.h"

/**
 * my_prime - function name
 * @current: input
 * @target: input
 * Return: result
 */
int my_prime(int current, int target)
{
	if (current == 1)
		return (1);

	if (target % current == 0)
		return (0);
	else
		return my_prime(current - 1, target);
}

/**
 * is_prime_number - function name
 * @n: input
 * Return: result
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (my_prime(n - 1, n));
}
