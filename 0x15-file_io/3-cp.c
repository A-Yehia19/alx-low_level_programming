#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * @ac: input
 * @av: input
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int file_from, file_to, size;
	char *buffer;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(97);
	}
	file_from = open(av[0], O_RDONLY);
	file_to = open(av[0], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	/* writing on file */
	buffer = malloc(1024 * sizeof(char));
	while ((size = read(file_from, buffer, sizeof(buffer))) != 0)
		write(file_to, buffer, size);

	/* closing file */
	if (close(file_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	free(buffer);
	return (0);
}
