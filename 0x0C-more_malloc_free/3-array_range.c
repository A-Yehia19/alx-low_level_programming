#include "main.h"
#include <stdlib.h>

/**
 * array_range - function name
 * @min: input
 * @max: input
 * Return: result
 */

int *array_range(int min, int max)
{
	int *result;
	int i, num, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	result = malloc(sizeof(int) * size);
	if (result == NULL)
		return (NULL);

	for (num = min, i = 0; num <= max; num++, i++)
		result[i] = num;

	return (result);
}
