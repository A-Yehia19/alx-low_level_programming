#include "search_algos.h"
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
	printf("Searching in array: ");
	for (; start <= end; start++)
	{
		printf("%d", array[start]);
		if (start != end)
			printf(", ");
	}
	printf("\n");
}

/**
 * search - perform binary search on an array
 * @array: array to serach in
 * @value: value to search in
 * @low: lower index to search
 * @high: higher index to search
 *
 * Return: index of first occurence
 */

int search(int *array, int value, size_t low, size_t high)
{
	int answer;
	size_t start, mid, end;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	answer = -1;
	start = low;
	end = high;
	while (array != NULL && start <= end)
	{
		mid = (start + end) / 2;
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

/**
 * exponential_search - perform exponential search on an array
 * @array: array to serach in
 * @size: size of array
 * @value: value to search in
 *
 * Return: index of first occurence
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, high;


	if (array[0] == value)
	{
		i = 0;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		return (i);
	}

	for (i = 1; i < size && array[i] <= value && array != NULL; i *= 2)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	if (i >= size)
		high = size - 1;
	else
		high = i;

	return (search(array, value, i / 2, high));
}
