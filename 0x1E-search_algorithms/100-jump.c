#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * jump_search - perform jump search on an array
 * @array: array to serach in
 * @size: size of array
 * @value: value to search in
 *
 * Return: index of first occurence
 */

int jump_search(int *array, size_t size, int value)
{
	int answer;
	size_t current, steps;

	answer = -1;
	steps = sqrt(size);

	/* jumps */
	current = 0;
	do {
		printf("Value checked array[%lu] = [%d]\n", current, array[current]);

		if (array[current] == value)
			return (current);

		current += steps;
	} while (current < size && array[current] < value);

	/* linear search until found or end of array */
	printf("Value found between indexes [%lu] and [%lu]\n",
			current - steps, current);

	for (current -= steps; current < size ; current++)
	{
		printf("Value checked array[%lu] = [%d]\n",
				current, array[current]);

		if (array[current] == value)
		{
			answer = value;
			break;
		}
	}

	return (answer);
}
