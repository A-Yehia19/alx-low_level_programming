#include "main.h"

/**
 * create_file - function name
 * @filename: input
 * @text_content: input
 * Return: result
 */

int create_file(const char *filename, char *text_content)
{
	int file, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	write(file, text_content, len);
	close(file);
	return (1);

}
