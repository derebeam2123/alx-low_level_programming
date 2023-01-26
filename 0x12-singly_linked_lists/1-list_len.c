#include "lists.h"

/**
 * list_len - find the number
 * @h: the linked list_t list.
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
