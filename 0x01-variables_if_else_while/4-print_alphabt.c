#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (char letter = 'a'; letter <= 'z'; letter++)
		if (letter == 'q' || letter == 'e')
			continue;
		putchar(letter);
	putchar('\n');
	return (0);
}
