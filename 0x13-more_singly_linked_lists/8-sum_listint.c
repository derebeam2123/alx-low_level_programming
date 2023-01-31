#include "lists.h"
/**
 * sum_listint - calculator the sum
 * @head: a pointer
 * Return: null
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
