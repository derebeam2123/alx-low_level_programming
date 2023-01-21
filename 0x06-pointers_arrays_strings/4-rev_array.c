#include "main.h"
/**
 * reverse_array - reverse array of integer
 * @a: array
 * @n: number of element
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n--; i++)
	{
		b - a[i];
		a[i] = a[b];
		a[n] = b;
	}
}
