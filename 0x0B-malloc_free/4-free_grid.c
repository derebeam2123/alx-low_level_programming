#include <stdlib.h>
#include "stdio.h"
/**
 * free_grid - frees the ,e,ory allocate for the grid
 * created by alloc_grid()
 * @grid: takes in width of grid
 * @height: heigt of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
