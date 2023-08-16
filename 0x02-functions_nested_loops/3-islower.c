#include "main.h"

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
