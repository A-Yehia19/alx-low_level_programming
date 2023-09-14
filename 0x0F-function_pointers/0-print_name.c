#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function name
 * @name: input
 * @f: input
 * Return: result
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
