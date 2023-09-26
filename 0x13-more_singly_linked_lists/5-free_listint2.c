#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_listint2 - function name
 * @head: input
 * Return: result
 */

void free_listint2(listint_t **head)
{
	listint_t *pointer;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	for (pointer = *head; pointer != NULL; pointer = next)
	{
		next = pointer->next;
		free(pointer);
	}

	*head = NULL;
}
