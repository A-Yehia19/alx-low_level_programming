#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * _islower: check if letter is lower case or not
 * @letter: the letter to check
 *
 * Return: Always 0 (Success)
 */

int _islower(int letter)
{
	return ('a' <= letter && letter <= 'z');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}
