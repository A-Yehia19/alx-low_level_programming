#include "main.h"

/**
 * append_text_to_file - function name
 * @filename: input
 * @text_content: input
 * Return: result
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	write(file, text_content, len);
	close(file);
	return (1);
}
