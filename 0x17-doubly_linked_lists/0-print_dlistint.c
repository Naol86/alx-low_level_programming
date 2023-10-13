#include "lists.h"

/**
 * print_dlistint - print list elements
 * @h: head of list
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	current = h;
	if (current != NULL)
	{
		do {
			printf("%d\n", current->n);
			current = current->next;
			count++;
		} while (current);
	}
	return (count);
}
