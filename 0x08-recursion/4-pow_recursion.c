#include "main.h"
/**
 * _pow_recursion - return the value x to power of y.
 * @x: the number to be raised.
 * @y: power.
 *
 * return: x raised to power y.
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)

		return (-1);
	else if (y == 0)
		return (1);
