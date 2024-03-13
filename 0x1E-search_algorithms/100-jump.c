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

int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 6, jump_search(array, size, 6));
    printf("Found %d at index: %d\n\n", 1, jump_search(array, size, 1));
    printf("Found %d at index: %d\n", 999, jump_search(array, size, 999));
    return (EXIT_SUCCESS);
}