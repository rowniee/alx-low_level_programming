#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2-d array
 * @width: width of the array
 * @height: array of the array
 * Return: 2-d array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid, c, d;

	if (width < 1 ||  height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (c = 0 ; c < height ; c++)
	{
		grid[c] = malloc(sizeof(int) * width);
		if (grid[c] == NULL)
		{
			for (c-- ; c >= 0 ; c--)
			{
				free(grid[c]);
			}
			free(grid);
			return (NULL);
		}
	}
	c = 0;
	for (d = 0 ; d < width ; d++)
	{
		grid[c][d] = 0;
	}
	return (grid);
}
