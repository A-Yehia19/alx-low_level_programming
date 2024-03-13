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
 * @low: lower range of search
 * @high: upper range of search
 * @value: value to search in
 *
 * Return: index of first occurence
 */

int search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (array == NULL || low > high)
		return (-1);

	print_array(array, low, high);
	mid = (high + low) / 2;

	if (array[mid] > value)
		return (search(array, low, mid - 1, value));
	else if (array[mid] < value)
		return (search(array, mid + 1, high, value));
	else if (array[mid] == value && mid != low)
		return (search(array, low, mid, value));
	return (mid);
}


/**
 * advanced_binary - perform binary search on an array
 * @array: array to serach in
 * @size: size of array
 * @value: value to search in
 *
 * Return: index of first occurence
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t start, end;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;
	return (search(array, start, end, value));
}
