#include "main.h"
#include <stdio.h>
/**
 * _istrcat - cocatenates two string
 * @dest: a pointer to the string
 * @src: the source
 *
 * Return: a pointer to the destination string @dest,
 */
char *_strcat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
