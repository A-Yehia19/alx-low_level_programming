#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - function name
 * @str: input
 * Return: result
 */

int count_words(char *str)
{
	int i, words;

	words = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
	}

	return (words);
}

/**
 * count_letters - function name
 * @str: input
 * Return: result
 */

int count_letters(char *str)
{
	int letters;

	for (letters = 0; str[letters] != ' ' && str[letters] != '\0'; letters++)
		;

	return (letters);
}

/**
 * strtow - function name
 * @str: input
 * Return: result
 */

char **strtow(char *str)
{
	char **result;
	int words, current_word, current_letter, insert_letter;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);

	result = malloc(sizeof(char *) * (words + 1));
	if (result == NULL)
		return (NULL);

	current_word = 0;
	for (current_letter = 0; str[current_letter]; current_letter++)
	{
		if (str[current_letter] == ' ')
			continue;

		result[current_word] = malloc(sizeof(char) * (count_letters(str + current_letter) + 1));
		if (result[current_word] == NULL)
		{
			for (current_word--; current_word >= 0; current_word--)
				free(result[current_word]);
			free(result);
			return (NULL);
		}

		for (insert_letter = 0; str[current_letter] != ' '; current_letter++, insert_letter++)
			result[current_word][insert_letter] = str[current_letter];
		result[current_word][insert_letter] = '\0';

		current_word++;
		current_letter--;
	}
	result[words] = NULL;

	return (result);
}
