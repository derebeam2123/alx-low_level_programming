#include "search_algos.h"
/*
 * linear_search - Searches
 * @array: A pointer to the first element
 * @size: The number
 * @value: The value
 * Return: 0 or 1
 * Description: Prints a value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
