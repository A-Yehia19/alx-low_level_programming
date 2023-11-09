#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return len;
}
