#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_last - get last node in skip list
 * @list: skip list pointer
 *
 * Return: last node
 */

skiplist_t *get_last(skiplist_t *list)
{
	if (list->next == NULL)
		return (list);

	return (get_last(list->next));
}

/**
 * linear_skip - perform linear search on skip list
 * @list: skip list pointer
 * @value: value to search in
 *
 * Return: node of value
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *end;

	if (list == NULL)
		return (NULL);

	printf("Value checked at index [%lu] = [%d]\n",
			list->express->index, list->express->n);

	if (list->express->n >= value || list->express->express == NULL)
	{
		if (list->express->n >= value)
			end = list->express;
		else
		{
			end = get_last(list);
			list = list->express;
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
				list->index, end->index);
		for (; list ; list = list->next)
		{
			printf("Value checked at index [%lu] = [%d]\n",
					list->index, list->n);

			if (list->n == value)
				return (list);
		}
		return (NULL);
	}

	return (linear_skip(list->express, value));
}
