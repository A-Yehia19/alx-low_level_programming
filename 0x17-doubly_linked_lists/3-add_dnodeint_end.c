#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of the list
 * @n: integer
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (*head)
	{
		last = *head;
		while (last->next)
			last = last->next;

		last->next = node;
		node->prev = last;
	}
	else
		*head = node;

	return (node);
}
