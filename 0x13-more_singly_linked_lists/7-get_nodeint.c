#include "lists.h"

/**
 * get_nodeint_at_index - locate
 * @head: a pointer
 * @index: index of node
 * Return: null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		
		head = head->next;
	}

	return (head);
}
