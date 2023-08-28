#include "lists.h"

/**
 * get_nodeint_at_index - Get the nodeint at index object
 * @head: head of linked list
 * @index: index
 * Return: listint_t*
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count = 0;

	current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
