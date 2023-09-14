#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function name
 * @s: input
 * Return: result
 */

int main(int argc, char *argv[])
{
	int a, b, ans;
	char *op;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}


	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = argv[2];

	function = get_op_func(op);

	if (function == NULL)
	{
		printf("Error\n");
		exit(99);
	}


	ans = function(a, b);
	printf("%d\n", ans);
	return (0);
}
