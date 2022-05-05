#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2 dimensional grid
 * @grid: takes in the width of the grid
 * @height: height of the grid
 * Return: no return:
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
