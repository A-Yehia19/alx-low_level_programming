#include <stdlib.h>
#include <stdio.h>

/**
 * interpolation_search - perform interpolation search on an array
 * @array: array to serach in
 * @size: size of array
 * @value: value to search in
 *
 * Return: index of first occurence
 */

int interpolation_search(int *array, size_t size, int value)
{
	int answer;
	size_t low, pos, high;

	answer = -1;
	low = 0;
	high = size - 1;
	while (array != NULL && low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));

		if (pos > size)
		{
			printf("Value checked array[%u] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%u] = [%d]\n", pos, array[pos]);

		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
		else
		{
			answer = pos;
			break;
		}

	}
	return (answer);
}
