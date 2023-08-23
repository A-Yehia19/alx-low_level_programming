#include "main.h"

/**
 * leet - function name
 * @str: input
 * Return: result
 */

char *leet(char *str)
{
	int i, j;
	char in[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; in[j] != '\0'; j++)
		{
			if (str[i] == in[j])
				str[i] = code[j];
		}
	}

	return (str);
}
