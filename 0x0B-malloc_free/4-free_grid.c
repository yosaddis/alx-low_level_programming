#include"main.h"
#include<stdlib.h>

/**
 * free_grid - free 2d array
 * @grid: multidimensional array of integer
 * @height: height of the grid
 *
 * Retrun: no reason
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
