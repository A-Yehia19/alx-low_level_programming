#include "main.h"

/**
 * len - function name
 * @s: input
 * Return: result
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + len(s + 1));
}

/**
 * check_palindrome - function name
 * @start: input
 * @end: input
 * Return: result
 */
int check_palindrome(int start, int end, char *s)
{
	if (start > end)
		return (1);

	if (s[start] != s[end])
		return (0);
	else
		return check_palindrome(start+1, end-1, s);
}

/**
 * is_palindrome - function name
 * @s: input
 * Return: result
 */

int is_palindrome(char *s)
{
    return(check_palindrome(0, len(s)-1, s));
}
