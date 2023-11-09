#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * @head: head of the list
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev;
	dlistint_t *next;
	dlistint_t *node = *head;

	if (!*head)
		return (-1);

	else if (index == 0)
	{
		*head = (*head)->next;
		if(*head)
			(*head)->prev = NULL;
		free(node);
	}
	else
	{
		for (; index > 0; index--)
		{
			if (!node)
				return (-1);

			node = node->next;
		}

		next = node->next;
		prev = node->prev;

		if (next)
			next->prev = prev;
		prev->next = next;
		free(node);
	}

	return (1);
}
