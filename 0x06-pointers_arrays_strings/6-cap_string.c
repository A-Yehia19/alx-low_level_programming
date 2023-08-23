#include "main.h"

/**
 * cap_string - function name
 * @str: input
 * Return: result
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == ',' ||
			str[i] == '{' || str[i] == '}' || str[i] == '(' ||
			str[i] == ')' || str[i] == ';' || str[i] == '"' ||
			str[i] == '!' || str[i] == '?' || str[i] == '.' || str[i] == '\t')
			if(str[i+1] >= 'a' && str[i+1] <= 'z')
				str[i+1] = str[i+1] - 'a' + 'A';
		if(i == 0)
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 'a' + 'A';
	}

	return (str);
}