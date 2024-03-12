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

	start = 0;
	end = size - 1;
	return (search(array, start, end, value));
}

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		0, 1, 2, 5, 5, 6, 6, 7, 8, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8));
	printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));
	printf("Found %d at index: %d\n", 999, advanced_binary(array, size, 999));
	return (EXIT_SUCCESS);
}