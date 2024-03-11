#include <stdlib.h>
#include <stdio.h>

/**
 * linear_search - perform linear search on an array
 * @array: array to serach in
 * @size: size of array
 * @value: value to search in
 *
 * Return: index of first occurence
 */

int linear_search(int *array, size_t size, int value)
{
	int answer;
	size_t i;

	answer = -1;
	for (i = 0; i < size && array != NULL; i++)
	{
		printf ("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			answer = i;
			break;
		}

	}
	return (answer);
}
