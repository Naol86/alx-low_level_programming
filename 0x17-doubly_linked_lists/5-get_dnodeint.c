#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 * @head: head of the list
 * @index: index
 * Return: dlistint_t*
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int indx = 0;

	current = head;

	while (current->next)
	{
		if (indx == index)
			return (current);
		current = current->next;
		indx++;
	}
	if (indx == index)
		return (current);

	return (NULL);
}
