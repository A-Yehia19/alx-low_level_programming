#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * get_index - get the index of a linked list
 * @list: linked list
 * @index: index to get
 *
 * Return: node at index
 */

listint_t *get_index(listint_t *list, size_t index)
{
	size_t i;

	for (i = 0; i < index; i++)
		list = list->next;

	return (list);
}

/**
 * jump_list - perform jump search on an linked list
 * @list: linked list to serach in
 * @size: size of linked list
 * @value: value to search in
 *
 * Return: node of first occurence
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t current, steps, end;

	if (list == NULL)
		return (NULL);

	/* jumps */
	steps = sqrt(size);
	current = 0;
	do {
		current += steps;

		if (current >= size)
			end = size - 1;
		else
			end = current;

		printf("Value checked array[%lu] = [%d]\n",
				end, get_index(list, end)->n);

		if (get_index(list, end)->n == value)
			return (get_index(list, end));
	} while (current < size && get_index(list, current)->n < value);

	/* linear search until found or end of array */
	printf("Value found between indexes [%lu] and [%lu]\n",
			current - steps, end);

	for (current -= steps; current < size ; current++)
	{
		printf("Value checked array[%lu] = [%d]\n",
				current, get_index(list, current)->n);

		if (get_index(list, current)->n == value)
			return (get_index(list, current));
	}

	return (NULL);
}
