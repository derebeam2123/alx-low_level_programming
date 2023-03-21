#include "main.h"
#include <stddef.h>
/**
 * _strchr - function string
 * @s: the string
 * @c: char
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);
}
