#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * linear_skip - perform linear search on skip list
 * @list: skip list pointer
 * @value: value to search in
 *
 * Return: node of value
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *last = NULL;

	if (list == NULL)
		return (NULL);

	printf("Value checked at index [%lu] = [%d]\n",
			list->express->index, list->express->n);

	if (list->express->n >= value)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
				list->index, list->express->index);
		for (; list ; list = list->next)
		{
			printf("Value checked at index [%lu] = [%d]\n",
					list->index, list->n);

			if (list->n == value)
				return (list);
		}
		return (NULL);
	}
	else
		return (linear_skip(list->express, value));
}

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	skiplist_t *list, *res;
	int array[] = {
		0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	list = create_skiplist(array, size);
	print_skiplist(list);

	res =  linear_skip(list, 53);
	printf("Found %d at index: %u\n\n", 53, res->index);
	res =  linear_skip(list, 2);
	printf("Found %d at index: %u\n\n", 2, res->index);
	res =  linear_skip(list, 999);
	printf("Found %d at index: %p\n", 999, (void *) res);

	free_skiplist(list);
	return (EXIT_SUCCESS);
}
