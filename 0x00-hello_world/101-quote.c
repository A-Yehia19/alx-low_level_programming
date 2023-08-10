#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = strlen(str);

	write(2, str, len);
	return (1);
}
