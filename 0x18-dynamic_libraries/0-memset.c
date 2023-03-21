#include "main.h"
/**
 * _memset - function as set
 * @s: string
 * @b: input string
 * @n: number of bytes
 * Return: 0 or any
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;
	for (count = 0; count < n ; count++)
	{
		s[count] = b;
	}
	return (s);
}
