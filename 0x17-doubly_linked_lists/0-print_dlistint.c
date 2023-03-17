#include "lists.h"
/**
 * print_dlistint - prints all elements
 * @h: head of the list
 * Return: number
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;
	while (node)
	{
		cont++;
		printf("%i\n", node->n);
		node = node->next;
	}
	return (cont);
}
