#include <stdio.h>
/**
 * _islower - lower
 * @c: c
 * Return: 0
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
