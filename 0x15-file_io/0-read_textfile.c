#include "main.h"

/**
 * read_textfile - function name
 * @filename: input
 * @letters: input
 * Return: result
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *content;
	int file, length;

	if (filename == NULL)
		return (0);

	content = malloc(letters * sizeof(char));
	if (content == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	/*Read the file and save in buffer*/
	length = read(file, content, letters);
	/*Write as standard output*/
	write(1, content, length);

	close(file);
	free(content);
	return (length);
}
