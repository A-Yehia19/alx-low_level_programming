#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * list_len - function name
 * @h: input
 * Return: result
 */

size_t list_len(const list_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}

	return (len);
}
