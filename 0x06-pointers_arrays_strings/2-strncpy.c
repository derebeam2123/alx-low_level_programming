#include "main.h"
/**
 * *_strncpy - C function that copies a string, include
 * terminating null byte, using at most an inputted number
 * the remainder of the destination string is filled with null bytes,
 * @dest: buffer strong the string copy
 * @src: the source string
 * @n: max number of the byte copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

		for (i = 0; i < n && src[i] != '\0'; i++)
			dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
