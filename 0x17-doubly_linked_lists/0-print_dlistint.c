#include "lists.h"
/**
 * print_dlistint - print element
 * @a: the head
 * Return: any number
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	while (a)
	{
		nodes++;
		printf("%d\n", a->n);
		a = a->next;
	}
	return (nodes)
}
