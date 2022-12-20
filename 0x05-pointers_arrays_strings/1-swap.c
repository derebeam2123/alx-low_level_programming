#include "main.h"
/**
 * swap_int - swap the value of two integers using two input parametrs
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: Nothing
 */

void snap_int(int *a, int *b)
{
	int changed;
	
	changed = *a;
	*a = *b;
	*b = changed;
}
