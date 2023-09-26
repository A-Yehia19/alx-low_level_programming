#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - function name
 * @head: input
 * @idx: input
 * @n: input
 * Return: result
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *pointer = *head;
	listint_t *new;
	unsigned int counter;

	for (counter = 0; counter < idx - 1 && pointer->next != NULL; counter++)
	{
		pointer = pointer->next;
	}

	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	else if (counter == idx - 1)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = pointer->next;
		pointer->next = new;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
