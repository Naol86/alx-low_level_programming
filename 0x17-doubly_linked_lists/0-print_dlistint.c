#include "lists.h"

/**
 * print_dlistint - print list elements
 * @h: head of list
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	unsigned int count = 0;

	current = h;
	if (current != NULL)
	{
		do {
			printf("%d\n", current->n);
			current = current->next;
			count++;
		} while (current != h);
	}
	return (count);
}
