#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements
 * @h: the list_t list
 * Return: the number
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
