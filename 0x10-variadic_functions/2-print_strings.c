#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - function name
 * @separator: input
 * Return: result
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s",str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
