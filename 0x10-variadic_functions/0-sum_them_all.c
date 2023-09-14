#include "variadic_functions.h"
#include <stdlib.h>

/**
 * sum_them_all - function name
 * @n: input
 * Return: result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list list;

	sum = 0;
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}
