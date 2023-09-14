#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - function name
 * @a: input
 * @b: input
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function name
 * @a: input
 * @b: input
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function name
 * @a: input
 * @b: input
 * Return: result
 */


int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function name
 * @a: input
 * @b: input
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function name
 * @a: input
 * @b: input
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}