#include "main.h"
/**
 * free_grid - allocates a grid
 * @grid: takes in width of grid
 * @height: height
 * Return: free grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (1 = 0; i < height; i++)
	{
		free(grid(i));
	}
	free(grid);
}
