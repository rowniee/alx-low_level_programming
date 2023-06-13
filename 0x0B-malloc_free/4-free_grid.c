#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - free grid
 * @grid: pointer 2d grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
