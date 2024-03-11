#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - print the array in range
 * @array: array to print
 * @start: start index
 * @end: end index
 *
 * Return: NONE
 */

void print_array(int *array, size_t start, size_t end)
{
	for (; start <= end; start++)
	{
		printf ("%d", array[start]);
		if (start != end)
			printf (", ");
	}
	printf("\n");
}


/**
 * binary_search - perform binary search on an array
 * @array: array to serach in
 * @size: size of array
 * @value: value to search in
 *
 * Return: index of first occurence
 */

int binary_search(int *array, size_t size, int value)
{
	int answer;
	size_t start, mid, end;

	answer = -1;
	start = 0;
	end = size - 1;
	while (array != NULL && start <= end)
	{
		mid = (start + end) / 2;
		printf ("Searching in array: ");
		print_array(array, start, end);

		if (array[mid] > value)
			end = mid - 1;
		else if (array[mid] < value)
			start = mid + 1;
		else
		{
			answer = mid;
			break;
		}

	}
	return (answer);
}
