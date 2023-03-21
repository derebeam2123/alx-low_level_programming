#include "main.h"
/**
 * _strcat - congat two string
 * @dest: dest
 * @src: input source
 * Return: 0 or 1
 */
char *_strcat(char *dest, char *src)
{
	int a, s;
	for (a = 0; dest[a] != '\0'; a++)
		;
	for (s = 0; src[s] != '\0'; s++)
	{
		dest[a] = src[s];
		s++;
	}
	return (dest);
}
