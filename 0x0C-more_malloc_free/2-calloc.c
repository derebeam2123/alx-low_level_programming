#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocte memory
 * @nmemb: number
 * @size: bytes
 * Return: size or nmemb == 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}

	return (p);
}
