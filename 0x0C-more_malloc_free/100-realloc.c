#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocate memory
 * @ptr: gtr
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	char *ptr_copy, *filler;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_copy = ptr;
	nptr = malloc(sizeof(*ptr_copy) * new_size);
		if (nptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		filler = nptr;
		for (i = 0; i < old_size && i < new_size; i++)
			filler[i] = *ptr_copy++;
		free(ptr);
	return (nptr);
}
