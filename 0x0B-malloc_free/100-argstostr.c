#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function name
 * @ac: input
 * @av: input
 * Return: result
 */

char *argstostr(int ac, char **av)
{
	char *res;
	int i, tmp, len, pos;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;

	for (i = 0; i < ac; i++)
	{
		for (tmp = 0; av[i][tmp] != '\0'; tmp++)
			;
		len += tmp + 1;
	}

	res = malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);

	pos = 0;
	for (i = 0; i < ac; i++)
	{
		for (tmp = 0; av[i][tmp] != '\0'; tmp++)
		{
			res[pos] = av[i][tmp];
			pos++;
		}
		res[pos] = '\n';
		pos++;
	}
	res[pos] = '\0';

	return (res);
}
