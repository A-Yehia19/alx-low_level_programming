#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * print_alphabet - print the alphabets 1 time
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
		putchar(letter);
	putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}
