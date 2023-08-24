#include "lists.h"
/**
 * list_len - length of linked list
 * @h: list
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	const list_t *current;
	unsigned int count = 0;

	current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
