#include <stdlib.hi>

/**
 * *malloc_checked - allocate memory
 * @b: bytes
 * Return:  pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
