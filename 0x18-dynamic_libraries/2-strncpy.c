#include "main.h"
/**
 * _strncpy - srting copy
 * @dest: out put dest
 * @src: input source
 * @n: number
 * Return: to 0 or 1
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;
	for (index = 0; index < n && src[index] != '\0' ; index++)
	{
		dest[index] = src[index];
	}
	for (; index  < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
