#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint - function name
 * @head: input
 * @n: input
 * Return: result
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    new = (listint_t *)malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = *head;

    *head = new;

    return (*head);
}
