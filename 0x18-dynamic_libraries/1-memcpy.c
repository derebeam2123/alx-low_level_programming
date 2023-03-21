#include "main.h"
/**
 * _memcpy - copy memory
 * @dest: output string
 * @src: input source
 * @n: number byts
 * Return: 0 or 1
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;
	char *pDst = dest;
	char const *pSrc =  src;
	for (count = 0; count < n; count++)
	{
		*pDst++ = *pSrc++;
	}
	return (dest);
}
