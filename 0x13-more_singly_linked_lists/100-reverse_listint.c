#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * reverse_listint - function name
 * @head: input
 * Return: result
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev = NULL;

	if (head == NULL)
		return (NULL);

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;

		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
