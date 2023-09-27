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

	if (head == NULL || *head == NULL)
		return (NULL);

	for (counter = 0; counter < idx - 1 && pointer->next != NULL; counter++)
	{
		pointer = pointer->next;
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else if (counter == idx - 1)
	{
		new->next = pointer->next;
		pointer->next = new;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
