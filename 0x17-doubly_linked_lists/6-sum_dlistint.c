#include "lists.h"

/**
 * sum_dlistint - summation of list
 * @head: head of list
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
