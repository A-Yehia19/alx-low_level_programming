#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * listint_len - function name
 * @h: input
 * Return: result
 */

size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);

	return (1 + listint_len(h->next));
}
