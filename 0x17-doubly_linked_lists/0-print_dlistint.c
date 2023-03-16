#include "lists.h"
/**
 * print_dlistint - prints all elements
 * @h: head of the list
 * Return: number
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
