#include "lists.h"
#include <stdio.h>
/**
 * listint_len - return number
 * @h: pointer
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
