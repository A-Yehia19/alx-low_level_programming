#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function name
 * @grid: input
 * @height: input
 * Return: result
 */

void free_grid(int **grid, int height)
{
	for (height--; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
