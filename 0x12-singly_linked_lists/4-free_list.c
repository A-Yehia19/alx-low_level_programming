#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_list - function name
 * @head: input
 * Return: result
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free(head->str);
	free(head);

	free_list(head->next);
}
