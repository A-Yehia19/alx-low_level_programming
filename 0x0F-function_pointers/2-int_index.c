#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function name
 * @array: input
 * @size: input
 * @cmp: input
 * Return: result
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int ans, i;

	ans = -1;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			ans = i;
			break;
		}
	}

	return ans;
}
