#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_list - function name
 * @h: input
 * Return: result
 */

size_t print_list(const list_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	return (len);
}
