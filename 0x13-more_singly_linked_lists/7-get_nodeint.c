#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - function name
 * @head: input
 * @index: input
 * Return: result
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
