#include "main.h"
/**
 * _isdigit - 0 to 9
 * @c: this entry
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
