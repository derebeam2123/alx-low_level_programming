#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocate memory
 * @b: bytes
 * Return: to ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;


	ptr = malloc(b);
	if (ptr == NULL)
		exist(98);
	return (ptr);
}
