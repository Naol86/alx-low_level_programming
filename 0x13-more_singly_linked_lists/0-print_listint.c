#include "lists.h"

/**
 * print_listint - print list
 * @h: linked list
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	unsigned int count = 0;

	current = h;
	while (current != NULL)
	{
		_putchar(current->n);
		current = current->next;
		count++;
	}

	return (count);
}
