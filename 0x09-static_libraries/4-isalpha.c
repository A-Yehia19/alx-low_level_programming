#include "main.h"

/**
 * _isalpha - returns 1 if lowercase alphabet and 0 otherwise
 * @letter: takes in a character
 * Return: 0 for uppercase, 1 for lowercase
 */

int _isalpha(int letter)
{
	return (('a' <= letter && letter <= 'z') || ('A' <= letter && letter <= 'Z'));
}
