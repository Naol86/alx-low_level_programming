#include "lists.h"
#include <stdio.h>

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
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	free(current);

	return (count);
}
