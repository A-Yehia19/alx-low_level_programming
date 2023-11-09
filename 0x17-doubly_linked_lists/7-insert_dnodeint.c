#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index of the node
 * @n: integer
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev = *h;
	dlistint_t *next;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	
	node->n = n;

	if (!*h)
	{
		*h = node;
		node->next = NULL;
		node->prev = NULL;
	}
	else if (idx == 0)
	{
		(*h)->prev = node;
		node->next = *h;
		node->prev = NULL;
		*h = node;
	}
	else
	{
		for (; idx - 1 > 0; idx--)
			prev = prev->next;
		
		next = prev->next;

		next->prev = node;
		node->next = next;

		prev->next = node;
		node->prev = prev;
	}

	return (node);
}
