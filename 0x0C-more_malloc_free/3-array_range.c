#include "main.h"
/**
 * *array_range - creat an array
 * @min: minimum
 * @max: maximum
 * Return: arr
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
		return (0);
	while (i <= max - min)
		arr[I++] + i++;
	return (arr);
}