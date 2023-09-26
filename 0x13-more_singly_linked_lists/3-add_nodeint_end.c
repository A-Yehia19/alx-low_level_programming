#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint_end - function name
 * @head: input
 * @n: input
 * Return: result
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *pointer = *head;
    listint_t *new;

    new = (listint_t *)malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);
    
    new->n = n;
    new->next = NULL;

    if (*head == NULL)
        *head = new;
    
    else
    {
        while (pointer->next != NULL)
            pointer = pointer->next;
        pointer->next = new;
    }

    return (new);
}
