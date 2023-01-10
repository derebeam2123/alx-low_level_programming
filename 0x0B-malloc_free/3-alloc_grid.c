#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - creat two d array of ints
 * @width: width of the matrix
 * @height: height of matrix
 *
 * Return: pointer to the created matrixor null
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;
	
	if (height <= 0 || width <= 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= i; j++)
				free(array[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
