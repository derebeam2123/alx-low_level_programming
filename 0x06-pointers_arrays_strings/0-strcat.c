#include "main.h"
/**
 * _strcat - cocatenates two string
 * @dest: a pointer to the string
 * @src: the source
 *
 * Return: a pointer to the destination string @dest,
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[indx++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
