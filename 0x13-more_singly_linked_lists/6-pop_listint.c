#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * pop_listint - function name
 * @head: input
 * Return: result
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int ans;

	if (head == NULL || *head == NULL)
		return (0);

	ans = (*head)->n;
	current = *head;

	*head = (*head)->next;
	free(current);
	return (ans);
}
