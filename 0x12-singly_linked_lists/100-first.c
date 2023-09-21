#include "lists.h"
#include <stdio.h>

/**
 * printBefore - function name
 * @void: input
 * Return: result
 */

void printBefore(void)__attribute__((constructor));

void printBefore(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
