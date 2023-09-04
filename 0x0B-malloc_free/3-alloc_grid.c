#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function name
 * @width: input
 * @height: input
 * Return: result
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int row, col;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **) malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		p[row] = (int *) malloc(width * sizeof(int));
		if (p[row] == NULL){
			for (; row >= 0; row--)
				free(p[row]);
			return (NULL);
		}

		for (col = 0; col < width; col++)
			p[row][col] = 0;
	}

	return (p);
}
