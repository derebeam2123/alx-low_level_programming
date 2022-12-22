#include "main.h"

/**
 * *_strcat - cocatenates n bytes of two string
 * @dest: pointer destination
 * @src: pointer of bytes
 * @n: number of bytes to receive
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0';)
		dest_len++;

	for (i = 0; i < n && src[i] != '\0';)
		i++;
	dest[dest_len + i] = src[i];
	/*shuld end with a end of string char*/
	dest[dest_len + i] = '\0';

	return (dest);
}

