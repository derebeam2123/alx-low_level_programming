#include "main.h"

/**
 * _strncat - cocatenates n bytes of two string
 * @dest: pointer destination
 * @src: pointer of bytes
 * @n: number of bytes to receive
 * Return: void
*/

char *_strncat(char *dest, char *src, int n)
{
	int j, i;
	
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
