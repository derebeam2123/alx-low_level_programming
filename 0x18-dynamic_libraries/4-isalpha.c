#include "main.h"
/**
 * _isalpha - is alpha
 * @c: character
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
