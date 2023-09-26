#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_listint - function name
 * @h: input
 * Return: result
 */

size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);

	printf("%d\n", h->n);

	return (1 + print_listint(h->next));
}
