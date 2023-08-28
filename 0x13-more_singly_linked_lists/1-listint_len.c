#include "lists.h"

/**
 * listint_len - length of the list
 * @h: linked list
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	unsigned int count = 0;

	current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
