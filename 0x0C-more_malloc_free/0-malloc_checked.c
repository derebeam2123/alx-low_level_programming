#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocate memory
 * @b: bytes
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exist(98);
	return (ptr);
}
