#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a previous 2 dimensional grid
 * @grid: input
 * @height: input
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
