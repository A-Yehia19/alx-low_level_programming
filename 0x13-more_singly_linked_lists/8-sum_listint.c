#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * sum_listint - function name
 * @head: input
 * Return: result
 */

int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
