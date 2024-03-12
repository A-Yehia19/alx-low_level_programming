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
	for (current = 0; current < size && array != NULL; current += steps)
	{
		if (array[current] >= value)
			break;

		printf("Value checked array[%lu] = [%d]\n", current, array[current]);
	}

	/* linear search until found or end of array */
	printf("Value found between indexes[%lu] and [%lu]\n",
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
