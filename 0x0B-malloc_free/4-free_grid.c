#include "main.h"

/**
 * free_grid - fress a 2 D grid created by alloc_grid
 * @grid: integer 1
 * @height: integer 2
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
