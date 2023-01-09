#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - allocates a grid
 * @grid: takes in width of grid
 * @height: height
 * free grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (1 = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
