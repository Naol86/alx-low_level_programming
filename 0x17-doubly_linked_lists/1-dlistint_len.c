#include "lists.h"

/**
 * dlistint_len - length of doubly linked list
 * @h: head of the list
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	current = h;
	if (current != NULL)
	{
		do {
			current = current->next;
			count++;
		} while (current);
	}
	return (count);
}
