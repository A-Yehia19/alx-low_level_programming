#include "main.h"

/**
 * print_alphabet - print alphabets 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
		{
			putchar(letter);
		}
		putchar('\n');
	}
}
