#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - function name
 * @head: input
 * @index: input
 * Return: result
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pointer = *head;
	listint_t *next;
	unsigned int counter;

	if (head == NULL || *head == NULL)
		return (-1);

	for (counter = 0; counter < index - 1 && pointer->next != NULL; counter++)
	{
		pointer = pointer->next;
	}

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	else if (counter == index - 1 && pointer->next != NULL)
	{
		next = pointer->next;
		pointer->next = pointer->next->next;
		free(next);
		return (1);
	}
	else
	{
		return (-1);
	}
}
