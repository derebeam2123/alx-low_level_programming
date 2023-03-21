#include "main.h"
/**
 * _strcmp - string
 * @s1: string 1
 * @s2: string 2
 * Return: 0 or 1
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
