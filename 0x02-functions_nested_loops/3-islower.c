#include "main.h"

/**
 * _islower - returns 1 if lowercase alphabet and 0 otherwise
 * @letter: takes in a character
 * Return: 0 for uppercase, 1 for lowercase
 */

int _islower(int letter)
{
	return ('a' <= letter && letter <= 'z');
}
