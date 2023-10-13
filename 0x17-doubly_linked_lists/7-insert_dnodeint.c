#include "lists.h"

/**
 * insert_dnodeint_at_index - add node at index
 * @h: head
 * @idx: index
 * @n: number
 * Return: dlistint_t*
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int index = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current = *h;

	if (current == NULL && idx == 0)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}

	while (current)
	{
		if (idx == index)
		{
			new_node->next = current;
			new_node->prev = current->prev;
			current->prev->next = new_node;
			return (new_node);
		}
		index++;
		current = current->next;
	}

	if (idx == index)
	{
		new_node->next = current;
		new_node->prev = current->prev;
		current->prev->next = new_node;
		return (new_node);
	}

	return (NULL);
}
